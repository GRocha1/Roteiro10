#include "SistemaGerenciaFolha.h"
#include "FuncionarioNaoExisteException.h"

using namespace std;

SistemaGerenciaFolha::SistemaGerenciaFolha()
{
    //ctor
}

SistemaGerenciaFolha::~SistemaGerenciaFolha()
{
    //dtor
}


void SistemaGerenciaFolha::setFuncionario(Funcionario *f, int i){
    if (i < 3){
        funcionario[i] = f;
    }
}
double SistemaGerenciaFolha::calculaValorTotalFolha(){
    double temp = 0;
    for(int i = 0; i < 3; i++){
        temp += funcionario[i]->calcularSalario();
    }
    return temp;
}
void SistemaGerenciaFolha::consultaSalarioFuncionario(string a, int c){
    for(int i = 0; i < c; i++){
        if(funcionario[i]->getNome().compare(a) == 0){
            cout << "Salario de " << a << " = " << funcionario[i]->calcularSalario() << endl;
            return;
        }
    }
    throw FuncionarioNaoExisteException();
}
