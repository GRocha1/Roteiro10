#ifndef VALORABAIXOEXPECTION_H
#define VALORABAIXOEXPECTION_H
#include <exception>

using namespace std;

class ValorAbaixoExpection : public exception
{
    public:
        ValorAbaixoExpection();
        virtual ~ValorAbaixoExpection() throw();

    protected:

    private:
};

#endif // VALORABAIXOEXPECTION_H
