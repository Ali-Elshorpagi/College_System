#include "Courses.h"

Courses::Courses()
{
    loadcounter = 0;
    doc = new StaffData*[200];
}

Courses::~Courses()
{
    for(auto i =0; i<loadcounter; ++i)
    {
        delete doc[i];
    }
    delete [] doc;
}


void Courses::SaveToFile(ofstream& out)
{
    out  <<id<<","
         <<name<<","
         <<hours<<","
         <<doctorID<<","
         <<doctorName
         <<endl;
}


void Courses::LoadFromFile(ifstream& in)
{
    getline(in,id,',');
    getline(in,name,',');
    getline(in,hours,',');
    getline(in,doctorID,',');
    getline(in,doctorName);
}


void Courses::addCoursesToDoctor()
{
    printline("\n\t\tID :",false);
    cin>>id;
    printline("\t\tName :",false);
    cin>>name;
    printline("\t\tHours :",false);
    cin>>hours;
    loadcounter = 0;
    string d;
    ifstream in("StaffData/Doctors.txt");
    if(in)
    {
        while(!in.eof())
        {
            doc[loadcounter] = new Doctors;
            doc[loadcounter++]->LoadFromFile(in);
        }
        in.close();
        printline("\n\t\tDoctors List...",1,14);
        for(int i=0; i<loadcounter-1; ++i)
        {
            doc[i]->printDoctors();
        }
    }
    printline("\n\t\tChoose Doctor ID :",false,8);
    cin>>d;
    int flag =0;
    for(int i=0; i<loadcounter-1; ++i)
    {
        if(doc[i]->getID()==d)
        {
            doctorID = doc[i]->getID();
            doctorName = doc[i]->getName();
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        printline("\n\n\t\tDoctor Added Successfully..:)\n");
    }
    else
    {
        printline("\n\n\t\tInvalid ID,Try again ^_^\n");
    }
}

string Courses::getName()
{
    return name;
}

string Courses::getID()
{
    return id;
}

void Courses::print()
{
    printline("\n\t\tID :",false);
    printline(id);
    printline("\t\tName :",false);
    printline(name);
    printline("\t\tHours :",false);
    printline(hours);
}
