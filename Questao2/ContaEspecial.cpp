#include "ContaEspecial.h"

using namespace std;

ContaEspecial::ContaEspecial(){

}

ContaEspecial::~ContaEspecial(){

}

ContaEspecial::ContaEspecial(string nomeCliente, string numeroConta,double salarioMensal, double saldo)
:Conta(nomeCliente, numeroConta,salarioMensal, saldo)
{
    definirLimite();
}
void ContaEspecial::definirLimite()
{
    setLimite(3 * getSalarioMensal());
}
