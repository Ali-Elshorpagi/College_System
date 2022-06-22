#include "Courses.h"

Courses::Courses()
{
}

Courses::~Courses()
{
}


void Courses::SaveToFile(ofstream& out)
{
    out  <<id<<","
         <<name<<","
         <<hours<<endl;
}


void Courses::LoadFromFile(ifstream& in)
{
    getline(in,id,',');
    getline(in,name,',');
    getline(in,hours);
}

string Courses::getName()
{
    return name;
}

string Courses::getID()
{
    return id;
}

void Courses::addCourses()
{
    printline("\n\t\tCode :",false);
    cin>>id;
    printline("\t\tName :",false);
    cin.ignore();
    getline(cin,name);
    printline("\t\tHours :",false);
    cin>>hours;
}

void Courses::print()
{
    printline("\n\t\tID :",false);
    printline(id);
    printline("\t\tName :",false);
    printline(name);
    printline("\t\tHours :",false);
    printline(hours);
}
