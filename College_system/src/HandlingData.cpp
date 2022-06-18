#include "HandlingData.h"
int HandlingData::staffcounter = 0;
HandlingData::HandlingData()
{
    staff = new StaffData*[500];
    staffLoad = new StaffData*[500];
}

HandlingData::~HandlingData()
{
    for(auto i =0; i<staffcounter; ++i)
    {
        delete staff[i];
    }
    delete [] staff;
    for(auto i =0; i<loadcounter; ++i)
    {
        delete staffLoad[i];
    }
    delete [] staffLoad;
}

bool HandlingData::sign_in(int flag)
{
    string user,pass;
    printline("\n\t\tUsername :",false);
    cin >> user;
    printline("\t\tPassword :",false);
    cin >> pass;
    switch(flag)
    {
    case 1:
    {
        loadcounter = 0;
        ifstream in("Doctors.txt");
        if(in)
        {
            while(!in.eof())
            {
                staffLoad[loadcounter] = new Doctors;
                staffLoad[loadcounter++]->LoadFromFile(in);
            }
            in.close();
            for(int i=0; i<loadcounter-1; ++i)
            {
                if(staffLoad[i]->signIn(user,pass))
                {
                    return true;
                }
            }
        }
        else
        {
            printline("\n\tThere is No User Yet...");
        }
        return false;
    }
    break;
    case 2:
    {
        loadcounter = 0;
        ifstream in("Students.txt");
        if(in)
        {
            while(!in.eof())
            {
                staffLoad[loadcounter] = new Student;
                staffLoad[loadcounter++]->LoadFromFile(in);
            }
            in.close();
            for(int i=0; i<loadcounter-1; ++i)
            {
                if(staffLoad[i]->signIn(user,pass))
                {
                    return true;
                }
            }
        }
        else
        {
            printline("\n\tThere is No User Yet...");
        }
        return false;
    }
    break;
    case 3:
    {
        loadcounter = 0;
        ifstream in("Teaching Assistants.txt");
        if(in)
        {
            while(!in.eof())
            {
                staffLoad[loadcounter] = new Teaching_Assistant;
                staffLoad[loadcounter++]->LoadFromFile(in);
            }
            in.close();
            for(int i=0; i<loadcounter-1; ++i)
            {
                if(staffLoad[i]->signIn(user,pass))
                {
                    return true;
                }
            }
        }
        else
        {
            printline("\n\tThere is No User Yet...");
        }
        return false;
    }
    break;
    }

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
