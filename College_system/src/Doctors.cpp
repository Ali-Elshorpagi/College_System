#include "Doctors.h"

Doctors::Doctors()
{
    type = "Doctor";
    typeID = 1;
}

Doctors::~Doctors()
{
    //dtor
}
void Doctors::AddSalary()
{

}
void Doctors::addCourses()
{


}
void Doctors::Print()
{
   // print doctor attribute
}

bool Doctors::signIn(string user,string pass)
{
    if(user == username && pass == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Doctors::signUP()
{
    bool flag = true;
    printline("\n\t\tUsername :",false);
    cin >> username;
    printline("\t\tPassword :",false);
    cin >> password;
    do
    {
        printline("\t\tEnter password Again :",false);
        cin >> passwordvalidaition;
        if(password!=passwordvalidaition)
        {
            flag = false;
            printline("\n\t\tUnsimilar password ...\n");
        }
        else
        {
            flag = true;
        }
    }
    while(!flag);
    printline("\t\tEnter ID :",false);
    cin>>id;
    printline("\t\tEnter Name :",false);
    cin.ignore();
    getline(cin,name);
    printline("\t\tEnter Email :",false);
    cin>>email;
    printline("\t\tEnter Phone :",false);
    cin>>phone;
    printline("\t\tEnter Address :",false);
    cin>>address;
    printline("\t\tEnter Gender :",false);
    cin>>gender;
}

