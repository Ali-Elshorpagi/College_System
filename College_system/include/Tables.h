#ifndef TABLES_H
#define TABLES_H

#include<ctime>
#include<iostream>
class Tables
{
    public:
        Tables();
        virtual ~Tables();
void addExam();
void editExma();
void print();
    protected:

    private:
            time_t now = time(0);
    char* date = ctime(&now);
};

#endif // TABLES_H
