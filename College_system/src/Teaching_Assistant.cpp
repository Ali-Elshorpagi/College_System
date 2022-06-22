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

void Teaching_Assistant::assignCourses()
{
    string courseFile = "DataBase/TeachingAssistantCourses/"+name+id+ ".txt";
    if(LoadCoursesFromFile())
    {
        printline("\n\t\tCourses List...",1,14);
        for(unsigned int i=0; i<CoursesList.size()-1; ++i)
        {
            CoursesList[i].print();
        }
        int n =-1;
        do
        {
            string d;
            printline("\n\t\tChoose Your Courses ID :",false,8);
            cin>>d;
            int flag = 0;
            for(unsigned int i=0; i<CoursesList.size()-1; ++i)
            {
                if(d == CoursesList[i].getID())
                {
                    ofstream out(courseFile, ios::app);
                    CoursesList[i].SaveToFile(out);
                    flag = 1;
                    break;
                }
            }
            if(flag)
            {
                printline("\n\t\tCourse Added Successfully To Teaching Assistant..:)\n");
            }
            else
            {
                printline("\n\t\tInvalid ID,Try again...\n");
            }
            printline("\n\t\t[1].Add Another :\n\t\t[0].Back :\n\t\tEnter Choice :",false,8);
            cin>>n;
        }
        while(n!=0);
    }
    else
    {
        printline("\n\t\tFile Not Found ..:)\n");
    }
}


void Teaching_Assistant::loadTACourses()
{
    string courseFile = "DataBase/TeachingAssistantCourses/"+name+id+ ".txt";
    TACourses.clear();
    ifstream in(courseFile);
    if(in)
    {
        while(!in.eof())
        {
            Courses c;
            c.LoadFromFile(in);
            TACourses.push_back(c);
        }
        in.close();
    }
    else
    {
        printline("\n\t\tFile Not Found ..:)\n");
    }
    return ;
}

