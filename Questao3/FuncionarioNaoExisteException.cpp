#include "FuncionarioNaoExisteException.h"
#include <stdio.h>

FuncionarioNaoExisteException::FuncionarioNaoExisteException()
{
    //ctor
}

FuncionarioNaoExisteException::~FuncionarioNaoExisteException() throw()
{
    //dtor
}

const char* FuncionarioNaoExisteException::what() const throw(){
    char *texto = new char[100];
    sprintf(texto, "O funcionario nao foi encontrado.");
    return (const char *)texto;
}
