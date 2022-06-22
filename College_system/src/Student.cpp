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

bool Student::signIn(string user,string pass)
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

void Student::SaveToFile(ofstream& out)
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
void Student::LoadFromFile(ifstream& in)
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

void Student::print()
{
    printline("\n\t\tType :",false,6);
    printline(type);
    printline("\t\tID :",false,6);
    printline(id);
    printline("\t\tName :",false,6);
    printline(name);
    printline("\t\tPhone :",false,6);
    printline(phone);
    printline("\t\tEmail :",false,6);
    printline(email);
    printline("\t\tGender :",false,6);
    printline(gender);
    printline("\t\tAddress :",false,6);
    printline(address);
    printline("\t\tBirthDay :",false,6);
    printline(birthDate);
    printCourses();
}

void Student::assignCourses()
{
    string courseFile = "DataBase/StudentCourses/"+name+id+ ".txt";
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
                printline("\n\t\tCourse Added Successfully To Student..:)\n");
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

bool Student::loadStudentCourses()
{
    string courseFile = "DataBase/StudentCourses/"+name+id+ ".txt";
    StudentCourses.clear();
    ifstream in(courseFile);
    if(in)
    {
        while(!in.eof())
        {
            Courses c;
            c.LoadFromFile(in);
            StudentCourses.push_back(c);
        }
        in.close();
        return true;
    }
    else
    {
        printline("\n\t\tNo Assigned Courses Yet ..:)\n");
    }
    return false;
}

void Student::printCourses()
{
    if(loadStudentCourses())
    {
        for(unsigned int i=0; i<StudentCourses.size()-1; ++i)
        {
            StudentCourses[i].print();
        }
    }
}

