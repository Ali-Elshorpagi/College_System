#include "Student.h"

Student::Student()
{
    typeID = 2;
    type = "Student";
}

Student::~Student()
{
    //dtor
}

Student::Student(string id,string name,string phone,string email,string gender,string address,string age)
{
    this->id = id;
    this->name = name;
    this->phone = phone;
    this->email = email;
    this->address = address;
    this->gender = gender;
    this->age = age;
    type = "Student";
}

bool Student::signIn(string user,string pass)
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

void Student::signUP()
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

void Student::saveToFile(ofstream& out)
{
    out << id<<","
        <<name<<","
        <<phone<<","
        <<email<<","
        <<gender<<","
        <<address<<","
        <<age<<","
        <<type
        <<endl;
}
void Student::loadFromFile(ifstream& in)
{
    getline(in,id,',');
    getline(in,name,',');
    getline(in,phone,',');
    getline(in,email,',');
    getline(in,gender,',');
    getline(in,address,',');
    getline(in,age,',');
    getline(in,type);
}

void Student::print()
{
    StaffData::print();
}
