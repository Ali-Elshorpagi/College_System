#include "Teaching_Assistant.h"

Teaching_Assistant::Teaching_Assistant()
{
    //ctor
}

Teaching_Assistant::~Teaching_Assistant()
{
    //dtor
}
void Teaching_Assistant::addCourses()
{
}
void Teaching_Assistant::addSalary()
{
}
void Teaching_Assistant::print()
{
}


bool Teaching_Assistant::signIn(string user,string pass)
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

void Teaching_Assistant::signUP()
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

