#ifndef REGISTRATION_H
#define REGISTRATION_H
#include<string>
using namespace std;
class Registration
{
    public:
        Registration();
        virtual ~Registration();
void login();
void signup();
void print();
    protected:

    private:
        string user_name;
        string pass;
        string key_security;
};

#endif // REGISTRATION_H
