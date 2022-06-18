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

bool HandlingData::sign_in(int con)
{
    switch(con)
    {
    case 1:
        {
            ifstream in("Doctors.txt");

        }
        break;
    case 2:
        {

        }
        break;
    case 3:
        {

        }
        break;
    }
    bool flag = 0;
    int s = -1;
    system("cls");
    string Username;
    cout<<endl;
    printline("\n\n\tMAIN MENU -> Sign In...");
    do
    {
        printline("\t\t  Username : ",false);
        cin >> Username;
        if(staffcounter == 0)
        {
            printline("\t\tThere is no users ....\n\t\tsign up then try again");
            return -2;
        }
        else
        {
            for(auto i=0; i<staffcounter; ++i)
            {
                if(Username == staff[i]->getUser())
                {
                    s = i;
                    flag = true;
                    break;
                }
                else
                {
                    printline("\t\t  Invalid Username");
                    flag = false;
                }
            }
        }
    }
    while(!flag);
    if(handlePassword(s))
    {
        return staff[s]->getTypeId();
    }
    return -1;

}

bool HandlingData::handlePassword(int index)
{
    bool flag = 0;
    int tryCounter = 0;
    string  password;
    do
    {
        printline("\t\t  Password : ",false);
        cin >> password;
        if(password == staff[index]->getPassword())
        {
            flag = true;
            printline("\t\t  Welcome...");
            Sleep(500);
            return true;
        }
        else
        {
            tryCounter++;
            printline("\t\t  Invalid Password...");
            flag = false;
        }
    }
    while(flag == false && tryCounter < 5);
    if (tryCounter == 5)
    {
        printline("\t\t  Sign In Error ...., \nTry again later ...");
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
