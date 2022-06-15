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

bool HandlingData::sign_in()
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
        staff[staffcounter++]->signUP();
    }
    break;
    case 2:
    {
        staff[staffcounter] = new Student;
        staff[staffcounter++]->signUP();
    }
    break;
    case 3:
    {
        staff[staffcounter] = new Teaching_Assistant;
        staff[staffcounter++]->signUP();
    }
    break;
    }
}
