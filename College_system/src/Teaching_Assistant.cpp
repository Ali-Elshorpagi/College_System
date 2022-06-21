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


bool Teaching_Assistant::signIn(string user,string pass)
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


void Teaching_Assistant::SaveToFile(ofstream& out)
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
void Teaching_Assistant::LoadFromFile(ifstream& in)
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


void Teaching_Assistant::AddPracticalExam()
{
    printline("\n\tPut Your Practical Exams Here According To Academic Year..:)\n");
    Sleep(2000);
    ShellExecute(NULL, "open","DataBase\\PracticalExams", NULL, NULL, SW_SHOW);
}


void Teaching_Assistant::AddQuizzes()
{
    printline("\n\tPut Your Quizzes Here According To Academic Year..:)\n");
    Sleep(2000);
    ShellExecute(NULL, "open","DataBase\\Quizzes", NULL, NULL, SW_SHOW);
}

