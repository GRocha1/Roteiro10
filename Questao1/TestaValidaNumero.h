#ifndef TESTAVALIDANUMERO_H
#define TESTAVALIDANUMERO_H
#include <exception>
#include "ValorAbaixoExpection.h"
#include "ValorAcimaExpection.h"
#include "ValorMuitoAcimaExpection.h"

using namespace std;

class TestaValidaNumero : public ValorAbaixoExpection, ValorAcimaExpection, ValorMuitoAcimaExpection
{
    public:
        TestaValidaNumero();
        void setnum(int);
        int getnem();
        void validaNumero(int);
        virtual ~TestaValidaNumero() throw();

    protected:

    private:
        ValorAbaixoExpection abaixo;
        ValorAcimaExpection acima;
        ValorMuitoAcimaExpection muito;
};

#endif // TESTAVALIDANUMERO_H
