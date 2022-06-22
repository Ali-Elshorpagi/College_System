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

bool Doctors::signIn(string user,string pass)
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
        <<birthDate<<","
        <<address<<","
        <<gender<<","
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
    getline(in,birthDate,',');
    getline(in,address,',');
    getline(in,gender,',');
    getline(in,type);
}

void Doctors::print()
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

void Doctors::AddExam()
{
    printline("\n\tPut Your Exams Here According To Academic Year..:)\n");
    Sleep(2000);
    ShellExecute(NULL, "open","DataBase\\Exams", NULL, NULL, SW_SHOW);
}

void Doctors::AddAssignments()
{
    printline("\n\tPut Your Assignments Here According To Academic Year..:)\n");
    Sleep(2000);
    ShellExecute(NULL, "open","DataBase\\Assignments", NULL, NULL, SW_SHOW);
}


void Doctors::assignCourses()
{
    string courseFile = "DataBase/DoctorCourses/"+name+id+ ".txt";
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
                printline("\n\t\tCourse Added Successfully To Doctor..:)\n");
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


void Doctors::loadDoctorCourses()
{
    string courseFile = "DataBase/DoctorCourses/"+name+id+ ".txt";
    DoctorCourses.clear();
    ifstream in(courseFile);
    if(in)
    {
        while(!in.eof())
        {
            Courses c;
            c.LoadFromFile(in);
            DoctorCourses.push_back(c);
        }
        in.close();
    }
    else
    {
        printline("\n\t\tFile Not Found ..:)\n");
    }
    return ;
}



string Doctors::getID()
{
    return id;
}

string Doctors::getName()
{
    return name;
}
