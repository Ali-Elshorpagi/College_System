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
    printline("\t\tEnter Phone :",false);
    cin>>phone;
    printline("\t\tEnter Email :",false);
    cin>>email;
    printline("\t\tEnter Birth Date :",false);
    cin.ignore();
    getline(cin, birthDate);
    printline("\t\tEnter Address :",false);
    cin.ignore();
    getline(cin, address);
    printline("\t\tEnter Gender :",false);
    cin>>gender;
}


void Doctors::SaveToFile(ofstream& out)
{
    out <<username<<","
        <<passwordvalidaition<<","
        <<id<<","
        <<name<<","
        <<phone<<","
        <<email<<","
        <<gender<<","
        <<address<<","
        <<birthDate<<","
        <<type<<endl;
}
void Doctors::LoadFromFile(ifstream& in)
{
    getline(in,username,',');
    getline(in,passwordvalidaition,',');
    getline(in,id,',');
    getline(in,name,',');
    getline(in,phone,',');
    getline(in,email,',');
    getline(in,gender,',');
    getline(in,address,',');
    getline(in,birthDate,',');
    getline(in,type);
}

