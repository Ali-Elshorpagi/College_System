#include "Administrator.h"

int Administrator::counter =0;

Administrator::Administrator()
{
    coure = new Courses[100];
    type = "Administrator";
}

Administrator::~Administrator()
{
    delete []coure;
}

void Administrator::AddCourses()
{
    coure[counter].addCourses();
    ofstream out;
    out.open("DataBase/Courses/Courses.txt",ios::app);
    coure[counter++].SaveToFile(out);
    out.close();
}

bool Administrator::signIn(string user,string pass)
{
    if(user == username && pass == passwordvalidaition)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Administrator::signUP()
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
    getline(cin, address);
    printline("\t\tEnter Gender :",false);
    cin>>gender;
}


void Administrator::SaveToFile(ofstream& out)
{
    out <<username<<","
        <<passwordvalidaition<<","
        <<id<<","
        <<name<<","
        <<phone<<","
        <<email<<","
        <<birthDate<<","
        <<address<<","
        <<gender<<","
        <<type<<endl;
}

void Administrator::LoadFromFile(ifstream& in)
{
    getline(in,username,',');
    getline(in,passwordvalidaition,',');
    getline(in,id,',');
    getline(in,name,',');
    getline(in,phone,',');
    getline(in,email,',');
    getline(in,birthDate,',');
    getline(in,address,',');
    getline(in,gender,',');
    getline(in,type);
}

void Administrator::print()
{
    printline("\t\tType :",false);
    printline(type);
    printline("\n\t\tID :",false);
    printline(id);
    printline("\t\tName :",false);
    printline(name);
    printline("\t\tPhone :",false);
    printline(phone);
    printline("\t\tEmail :",false);
    printline(email);
    printline("\t\tGender :",false);
    printline(gender);
    printline("\t\tAddress :",false);
    printline(address);
    printline("\t\tBirthDay :",false);
    printline(birthDate);
}
