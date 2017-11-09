#include "Assalariado.h"

Assalariado::Assalariado()
{
    salario = 0;
}

Assalariado::Assalariado(string n, int m, double s) : Funcionario(n, m)
{
    salario = s;
}

void Assalariado::setSalario(double salario)
{
    this -> salario = salario;
}

double Assalariado::getSalario()
{
    return salario;
}

double Assalariado::calcularSalario()
{
    return salario;
}

void Assalariado::setMatricula(int matricula)
{
    this -> matricula = matricula;
}

int Assalariado::getMatricula()
{
    return matricula;
}

void Assalariado::setNome(string nome)
{
    this -> nome = nome;
}
string Assalariado::getNome()
{
    return nome;
}
