#include "Conta.h"
#include <iostream>
#include "SaldoNaoDisponivelException.h"

using namespace std;

Conta::Conta()
{
    setNomeCliente(" ");
    setSalarioMensal(0.0);
    setNumeroConta(" ");
    setSaldo(0);
}

Conta::Conta(string nome,string numC,double salM,double saldo1){
    nomeCliente = nome;
    numeroConta = numC;
    salarioMensal = salM;
    saldo = saldo1;
}

Conta::~Conta(){

}

void Conta::setSalarioMensal(double sal)
{
    salarioMensal = sal;
}

double Conta::getSalarioMensal()
{
    return salarioMensal;
}

void Conta::setSaldo(double sald)
{
    saldo = sald;
}
double Conta::getSaldo()
{
    return saldo;
}

void Conta::setNumeroConta(string numConta)
{
    numeroConta = numConta;
}

string Conta::getNumeroConta()
{
    return numeroConta;
}

void Conta::setLimite(double lim)
{
    limite = lim;
}
double Conta::getLimite()
{
    return limite;
}

void Conta::setNomeCliente(string nome)
{
    nomeCliente = nome;
}

string Conta::getNomeCliente()
{
    return nomeCliente;
}

void Conta::definirLimite()
{
    limite = salarioMensal*2;
}

void Conta::sacar(double valor)
{
    if(limite + saldo >= valor)
    {
        saldo -= valor;
        cout << "Saque: RS" << valor << endl;
        cout << "Saldo: " << saldo << endl;
    }
    else{
        cout<<"Limite insuficiente.\n";
        throw SaldoNaoDisponivelException(saldo+limite, valor);
    }
}
void Conta::depositar(double valor)
{
    saldo+=valor;
    cout << "Saldo atual: RS" << saldo << endl;
}

