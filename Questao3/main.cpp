#include <iostream>
#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "FuncionarioNaoExisteException.h"
#include <string>

using namespace std;

int main()
{
    SistemaGerenciaFolha sistema;
    int op;
    Assalariado a;
    Horista h;
    Comissionado c;
    int m;
    string n;
    FuncionarioNaoExisteException f = FuncionarioNaoExisteException();
    int contador = 0;

    while(1){
        cout << "### MENU ###" << endl
             << "1 - Cadastrar funcionario" << endl
             << "2 - Valor total da folha" << endl
             << "3 - Consultar salario de um funcionario" << endl
             << "4 - Sair" << endl;

        cin >> op;

        switch(op){
            case 1:
                cout << "### MENU DE CADASTRO ###" << endl
                     << "1 - Assalariado" << endl
                     << "2 - Horista" << endl
                     << "3 - Comssionado" << endl;
                cin >> op;

                switch(op){
                    case 1:
                        cout << "Nome: ";
                        //string n;
                        cin >> n;
                        a.setNome(n);
                        cout << "Matricula: ";
                        //int m;
                        cin >> m;
                        a.setMatricula(m);
                        cout << "Salario: ";
                        double s;
                        cin >> s;
                        a.setSalario(s);
                        sistema.setFuncionario(&a, contador);
                        contador++;
                        break;
                    case 2:
                        cout << "Nome: ";
                        //string n;
                        cin >> n;
                        h.setNome(n);
                        cout << "Matricula: ";
                        //int m;
                        cin >> m;
                        h.setMatricula(m);
                        cout << "Salario por hora: ";
                        double sPH;
                        cin >> sPH;
                        h.setSalarioPorHora(sPH);
                        cout << "Horas trabalhadas: ";
                        double hT;
                        cin >> hT;
                        h.setHorasTrabalhadas(hT);
                        sistema.setFuncionario(&h, contador);
                        contador++;
                        break;
                    case 3:
                        cout << "Nome: ";
                        //string n;
                        cin >> n;
                        c.setNome(n);
                        cout << "Matricula: ";
                        //int m;
                        cin >> m;
                        c.setMatricula(m);
                        cout << "Salario base por semana: ";
                        double sB;
                        cin >> sB;
                        c.setsalarioBase(sB);
                        cout << "Venda semanal: ";
                        double vS;
                        cin >> vS;
                        c.setvendasSemanais(vS);
                        cout << "Percentual por venda: ";
                        double pV;
                        cin >> pV;
                        pV /= 100;
                        c.setpercentualComissao(pV);
                        sistema.setFuncionario(&c, contador);
                        contador++;
                        break;
                    default:
                        cout << "Opcao invalida" << endl;
                        break;
                }
                break;
            case 2:
                cout << "Valor total da folha = " << sistema.calculaValorTotalFolha() << endl;
                break;
            case 3:
                //string n;
                cout << "Insira o nome do funcionario: ";
                cin >> n;
                try{
                    sistema.consultaSalarioFuncionario(n, contador);
                }
                catch(FuncionarioNaoExisteException f){
                    cout << f.what() << endl;
                }
                break;
            case 4:
                return 1;
            default:
                cout << "Opcao invalida" << endl;
                break;
        }
    }

    return 0;
}
