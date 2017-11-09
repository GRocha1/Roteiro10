#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"
#include <iostream>
#include <string>

using namespace std;

class Conta: public IConta
{
    private:
        string nomeCliente;
        double salarioMensal;
        string numeroConta;
        double saldo;
        double limite;

    public:
        Conta();
        Conta(string,string,double,double);
        virtual ~Conta();

        void setSalarioMensal(double);
        double getSalarioMensal();

        void setSaldo(double);
        double getSaldo();

        void setNumeroConta(string);
        string getNumeroConta();

        void setLimite(double);
        double getLimite();

        void setNomeCliente(string);
        string getNomeCliente();

        void sacar(double);
        void depositar(double);

        virtual void definirLimite();

};

#endif


