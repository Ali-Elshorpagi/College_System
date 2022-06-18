#include "HandlingData.h"
int HandlingData::staffcounter = 0;
HandlingData::HandlingData()
{
    staff = new StaffData*[500];
}

HandlingData::~HandlingData()
{
    for(auto i =0; i<staffcounter; ++i)
    {
        delete staff[i];
    }
    delete [] staff;
}

bool HandlingData::sign_in(int flag)
{
    string user,pass;
    printline("\n\t\tUsername :",false);
    cin >> user;
    printline("\t\tPassword :",false);
    cin >> pass;
    for(int i=0; i<staffcounter; ++i)
    {
        if(staff[i]->signIn(user,pass))
        {
            return true;
        }
    }
    return false;
}

void HandlingData::sign_up(int flag)
{
    switch(flag)
    {
    case 1:
    {
        staff[staffcounter] = new Doctors;
        staff[staffcounter]->signUP();
         ofstream out;
         out.open("Doctors.txt",ios::app);
         staff[staffcounter++]->SaveToFile(out);
         out.close();
    }
    break;
    case 2:
    {
        staff[staffcounter] = new Student;
        staff[staffcounter]->signUP();
        ofstream out;
        out.open("Students.txt",ios::app);
        staff[staffcounter++]->SaveToFile(out);
        out.close();
    }
    break;
    case 3:
    {
        staff[staffcounter] = new Teaching_Assistant;
        staff[staffcounter]->signUP();
        ofstream out;
        out.open("Teaching Assistants.txt",ios::app);
        staff[staffcounter++]->SaveToFile(out);
        out.close();
    }
    break;
    }
}
