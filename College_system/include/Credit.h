#ifndef CREDIT_H
#define CREDIT_H
#include<Pay.h>
#include<string>
using namespace std;


class Credit:public Pay
{
    public:
        Credit();
        virtual ~Credit();

    protected:

    private:
        string number;

};

#endif // CREDIT_H
