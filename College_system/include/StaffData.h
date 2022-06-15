#ifndef STAFFDATA_H
#define STAFFDATA_H
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

class StaffData
{
public:
    virtual void print();
    virtual void signUP() = 0;
    virtual bool signIn(string,string) = 0;

    string getPassword();
    string getUser();
    StaffData();
    virtual ~StaffData();

protected:
    string id;
    string name;
    string phone;
    string email;
    string age;
    string gender;
    string address;
    string type;
    string username;
    string password;
    string passwordvalidaition;
};

#endif // STAFFDATA_H
