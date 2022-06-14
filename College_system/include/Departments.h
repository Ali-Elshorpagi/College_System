#ifndef DEPARTMENTS_H
#define DEPARTMENTS_H
#include<string>
using namespace std;


class Departments
{
    public:
        Departments();
        virtual ~Departments();
 void addDepart();
 void editDepart();
 void deleteDepart();
 void print();

    protected:

    private:
        int id;
        string name;

};

#endif // DEPARTMENTS_H
