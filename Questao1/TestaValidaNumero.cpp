#include "TestaValidaNumero.h"

TestaValidaNumero::TestaValidaNumero()
{
    abaixo = ValorAbaixoExpection();
    acima = ValorAcimaExpection();
    muito = ValorMuitoAcimaExpection();
}

TestaValidaNumero::~TestaValidaNumero() throw()
{
    //dtor
}

void TestaValidaNumero::validaNumero(int num)
{
    if(num <= 0)
        throw abaixo;
    if(num > 100 && num < 1000)
        throw acima;
    if(num >= 1000)
        throw muito;
}
