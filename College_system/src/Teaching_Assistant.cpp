#include "Teaching_Assistant.h"

Teaching_Assistant::Teaching_Assistant()
{
    type = "Teaching_Assistant";
    typeID = 3;
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


void Teaching_Assistant::SaveToFile(ofstream& out)
{
    out <<username<<","
        << passwordvalidaition<<","
        << id<<","
        <<name<<","
        <<phone<<","
        <<email<<","
        <<gender<<","
        <<address<<","
        <<age<<","
        <<type<<endl;
}
void Teaching_Assistant::LoadFromFile(ifstream& in)
{
    getline(in,username,',');
    getline(in,passwordvalidaition,',');
    getline(in,id,',');
    getline(in,name,',');
    getline(in,phone,',');
    getline(in,email,',');
    getline(in,gender,',');
    getline(in,address,',');
    getline(in,age,',');
    getline(in,type);
}

