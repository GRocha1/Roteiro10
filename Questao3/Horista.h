#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"


class Horista: public Funcionario
{
    private:
        double salarioPorHora;
        double horasTrabalhadas;
        string nome;
        int matricula;

    public:
        Horista();
        Horista(string n, int m, double sPH, double hT);

        void setSalarioPorHora(double);
        double getSalarioPorHora();
        void setHorasTrabalhadas(double);
        double getHorasTrabalhadas();
        void setSalario(double);
        double getSalario();
        void setMatricula(int);
        int getMatricula();
        void setNome(string);
        string getNome();
        double calcularSalario();

};

#endif
