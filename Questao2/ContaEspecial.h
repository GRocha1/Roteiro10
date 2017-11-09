#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"

using namespace std;

class ContaEspecial: public Conta
{
    public:
        ContaEspecial();
        ContaEspecial(string nomeCliente, string numeroConta,double salarioMensal, double saldo);
        virtual ~ContaEspecial();
        virtual void definirLimite();

};

#endif
