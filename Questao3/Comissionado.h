#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"

using namespace std;

class Comissionado : public Funcionario
{
    public:
        Comissionado();
        Comissionado(string n, int m, double vS, double pC, double sB);
        void setvendasSemanais(double);
        double getvendasSemanais();
        void setpercentualComissao(double);
        double getpercentualComissao();
        void setsalarioBase(double);
        double getsalarioBase();
        void setMatricula(int);
        int getMatricula();
        void setNome(string);
        string getNome();
        double calcularSalario();
        virtual ~Comissionado();

    private:
        string nome;
        int matricula;
        double vendasSemanais;
        double percentualComissao;
        double salarioBase;
};

#endif // COMISSIONADO_H
