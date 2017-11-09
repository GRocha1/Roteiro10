#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H_INCLUDED
#define FUNCIONARIONAOEXISTEEXCEPTION_H_INCLUDED

#include <exception>
#include <string>

class FuncionarioNaoExisteException : public std::exception
{
    public:
        FuncionarioNaoExisteException();
        virtual ~FuncionarioNaoExisteException() throw();
        virtual const char* what() const throw();
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H_INCLUDED
