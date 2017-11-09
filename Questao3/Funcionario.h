#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

using namespace std;


class Funcionario
{
    private:
        string nome;
        int matricula;

    public:
        Funcionario();
        Funcionario(string n, int m);

        virtual void setMatricula(int) = 0;
        virtual int getMatricula() = 0;
        virtual void setNome(string) = 0;
        virtual string getNome() = 0;

        virtual double calcularSalario() = 0;




};

#endif
