#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"

using namespace std;

class Assalariado: public Funcionario
{
    private:
        double salario;
        string nome;
        int matricula;

    public:
        Assalariado();
        Assalariado(string n, int m, double s);

        void setSalario(double);
        double getSalario();
        void setMatricula(int);
        int getMatricula();
        void setNome(string);
        string getNome();

        double calcularSalario();

};

#endif
