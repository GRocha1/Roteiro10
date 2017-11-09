#include "Horista.h"

Horista::Horista()
{
    salarioPorHora = 0;
}

Horista::Horista(string n, int m, double sPH, double hT) : Funcionario(n, m)
{
    salarioPorHora = sPH;
    horasTrabalhadas = hT;
}

void Horista::setSalarioPorHora(double salarioPorHora)
{
    this -> salarioPorHora = salarioPorHora;
}

double Horista::getSalarioPorHora()
{
    return salarioPorHora;
}
void Horista::setHorasTrabalhadas(double horasTrabalhadas)
{
    this -> horasTrabalhadas = horasTrabalhadas;
}

double Horista::getHorasTrabalhadas()
{
    return horasTrabalhadas;
}

double Horista::calcularSalario()
{
    if(horasTrabalhadas > 40)
        return (salarioPorHora*40) + (salarioPorHora * 1,5 *(horasTrabalhadas - 40));
    else
        return salarioPorHora*horasTrabalhadas;
}

void Horista::setMatricula(int matricula)
{
    this -> matricula = matricula;
}

int Horista::getMatricula()
{
    return matricula;
}

void Horista::setNome(string nome)
{
    this -> nome = nome;
}
string Horista::getNome()
{
    return nome;
}
