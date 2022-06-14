#include "Utilities.h"

Utilities::Utilities()
{
    //ctor
}

Utilities::~Utilities()
{
    //dtor
}

void Utilities::addStudent(Student &stu)
{
    allStudents.push_back(stu);
}

void Utilities::addStudent(string id,string name,string phone,string email,string gender,string address,string age,string type)
{
    Student st(id,name,phone,email,gender,address,age);
    allStudents.push_back(st);
}

void Utilities::saveStudents()
{
    ofstream out("Students.txt", ios::app);
    for(unsigned int i=0; i<allStudents.size(); ++i)
    {
        allStudents[i].saveToFile(out);
    }
    out.close();
}

void Utilities::addStudent()
{
    Student st;
    st.signUP();
    allStudents.push_back(st);
}

void Utilities::loadStudents()
{
    allStudents.clear();
    ifstream in("Students.txt");
  while(!in.eof())
    {
        Student s;
        s.loadFromFile(in);
        allStudents.push_back(s);
    }
    in.close();
}
void Utilities::printStudents()
{
    for(unsigned int i=0; i<allStudents.size(); ++i)
    {
        allStudents[i].print();
    }
}
