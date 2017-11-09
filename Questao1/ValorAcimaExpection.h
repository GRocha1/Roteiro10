#ifndef VALORACIMAEXPECTION_H
#define VALORACIMAEXPECTION_H
#include <exception>

using namespace std;

class ValorAcimaExpection : public exception
{
    public:
        ValorAcimaExpection();
        virtual ~ValorAcimaExpection() throw();

    protected:

    private:
};

#endif // VALORACIMAEXPECTION_H
