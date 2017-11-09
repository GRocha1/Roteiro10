#include "Comissionado.h"

Comissionado::Comissionado()
{
    salarioBase = 0;
}

Comissionado::Comissionado(string n, int m, double vS, double pC, double sB) : Funcionario(n, m){
    vendasSemanais = vS;
    percentualComissao = pC;
    salarioBase = sB;
}

Comissionado::~Comissionado()
{
    //dtor
}

double Comissionado::calcularSalario()
{
    return (salarioBase) + (vendasSemanais*percentualComissao);
}

void Comissionado::setMatricula(int matricula)
{
    this -> matricula = matricula;
}

int Comissionado::getMatricula()
{
    return matricula;
}

void Comissionado::setNome(string nome)
{
    this -> nome = nome;
}
string Comissionado::getNome()
{
    return nome;
}

void Comissionado::setvendasSemanais(double vendasSemanais)
{
    this-> vendasSemanais = vendasSemanais;
}

double Comissionado::getvendasSemanais()
{
    return vendasSemanais;
}

void Comissionado::setpercentualComissao(double percentualComissao)
{
    this-> percentualComissao = percentualComissao;
}

double Comissionado::getpercentualComissao()
{
    return percentualComissao;
}

void Comissionado::setsalarioBase(double salarioBase)
{
    this-> salarioBase = salarioBase;
}

double Comissionado::getsalarioBase()
{
    return salarioBase;
}
