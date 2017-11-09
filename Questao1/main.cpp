#include <iostream>
#include "TestaValidaNumero.h"
#include <exception>

using namespace std;

int main()
{
    int n;
    TestaValidaNumero teste = TestaValidaNumero();
    cout << "Digite um numero: ";
    cin >> n;
    try
    {
        teste.validaNumero(n);
        cout << "Numero ok!";
    }
    catch(ValorAbaixoExpection abaixo)
    {
        cout << "Numero abaixo!";
    }
    catch(ValorAcimaExpection acima)
    {
        cout << "Numero acima!";
    }
    catch(ValorMuitoAcimaExpection muito)
    {
        cout << "Numero muito acima!";
    }
    return 0;
}
