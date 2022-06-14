#ifndef BOOKS_H
#define BOOKS_H
#include"Doctors.h"
#include"Courses.h"
#include<string>
#include<Pay.h>
using namespace std;
class Books
{
public:
    Books();
    virtual ~Books();
    void addBooks();
    void print();
protected:

private:
    Courses*course;
    string Doctor_name;
    Pay  spend;

};

#endif // BOOKS_H
