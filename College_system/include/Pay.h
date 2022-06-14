#ifndef PAY_H
#define PAY_H
#include<iostream>
#include<ctime>
#include<string>
using namespace std;


class Pay
{
public:
    Pay();
    virtual ~Pay();
    void print();
    void calcPay();
    void Update();

protected:

private:
    double amount;
    time_t now = time(0);
    char* paid_date = ctime(&now);
};

#endif // PAY_H
