#include "StaffData.h"

StaffData::StaffData()
{

}

StaffData::~StaffData()
{

}


string StaffData::getPassword()
{
    return password;
}

string StaffData::getUser()
{
    return username;
}

int StaffData::getTypeId()
{
    return typeID;
}

void StaffData::printDoctors()
{
    printline("\n\t\tID :",false);
    printline(id);
    printline("\t\tName :",false);
    printline(name);

}

bool StaffData::LoadCoursesFromFile()
{
    CoursesList.clear();
    ifstream in("DataBase/Courses/Courses.txt");
    if(in)
    {
        while(!in.eof())
        {
            Courses c;
            c.LoadFromFile(in);
            CoursesList.push_back(c);
        }
        in.close();
    }
    else
    {
        return false;
    }
    return true;
}
