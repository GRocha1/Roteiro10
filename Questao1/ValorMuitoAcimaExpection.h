#ifndef VALORMUITOACIMAEXPECTION_H
#define VALORMUITOACIMAEXPECTION_H
#include <exception>

using namespace std;

class ValorMuitoAcimaExpection : public exception
{
    public:
        ValorMuitoAcimaExpection();
        virtual ~ValorMuitoAcimaExpection() throw();

    protected:

    private:
};

#endif // VALORMUITOACIMAEXPECTION_H
