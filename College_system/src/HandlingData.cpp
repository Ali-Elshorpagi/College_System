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

int HandlingData::get_menu_choise(string menu, int level)
{
    stringstream X(menu);
    string line, padding;
    int i = 1;
    for (int p = 0; p < level + 1; ++p)
        padding += "\t";

    while (getline(X, line, ','))
        printline(padding + "[" + to_string(i++) + "]." + line, 1, level + 10);

    printline(level ? padding + "[0].RETURN BACK" : padding + "[0].EXIT APP", 1, 5);
    int c;
    printline("ENTER YOUR CHOICE :", false);
    cin >> c;
    return c;
}

void HandlingData::print()
{
    loadcounter = 0;
    ifstream in("DataBase/StaffData/Students.txt");
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
            staffLoad[i]->print();
        }
    }
    else
    {
        printline("\n\tFile Not Found...");
    }
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
        ifstream in("DataBase/StaffData/Doctors.txt");
        if(in)
        {
            while(!in.eof())
            {
                staffLoad[loadcounter] = new Doctors;
                staffLoad[loadcounter++]->LoadFromFile(in);
            }
            in.close();
            for(int i=0; i<loadcounter; ++i)
            {
                if(staffLoad[i]->signIn(user,pass))
                {
                    sub_sub_menu_1_sign_in_doctor(i);
                    return true;
                }
            }
        }
        else
        {
            printline("\n\tThere is No Users Yet...");
        }
        return false;
    }
    break;
    case 2:
    {
        loadcounter = 0;
        ifstream in("DataBase/StaffData/Students.txt");
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
                    sub_sub_menu_1_sign_in_stduent(i);
                    return true;
                }
            }
        }
        else
        {
            printline("\n\tThere is No Users Yet...");
        }
        return false;
    }
    break;
    case 3:
    {
        loadcounter = 0;
        ifstream in("DataBase/StaffData/Teaching Assistants.txt");
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
                    sub_sub_menu_1_sign_in_teaching_assistant(i);
                    return true;
                }
            }
        }
        else
        {
            printline("\n\tThere is No Users Yet...");
        }
        return false;
    }
    break;
    case 4:
    {
        loadcounter = 0;
        ifstream in("DataBase/StaffData/Administrator.txt");
        if(in)
        {
            while(!in.eof())
            {
                staffLoad[loadcounter] = new Administrator;
                staffLoad[loadcounter++]->LoadFromFile(in);
            }
            in.close();
            for(int i=0; i<loadcounter-1; ++i)
            {
                if(staffLoad[i]->signIn(user,pass))
                {
                    sub_sub_menu_1_sign_in_admin(i);
                    return true;
                }
            }
        }
        else
        {
            printline("\n\tThere is No Users Yet...");
        }
        return false;
    }
    break;
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
        out.open("DataBase/StaffData/Doctors.txt",ios::app);
        staff[staffcounter++]->SaveToFile(out);
        out.close();
    }
    break;
    case 2:
    {
        staff[staffcounter] = new Student;
        staff[staffcounter]->signUP();
        ofstream out;
        out.open("DataBase/StaffData/Students.txt",ios::app);
        staff[staffcounter++]->SaveToFile(out);
        out.close();
    }
    break;
    case 3:
    {
        staff[staffcounter] = new Teaching_Assistant;
        staff[staffcounter]->signUP();
        ofstream out;
        out.open("DataBase/StaffData/Teaching Assistants.txt",ios::app);
        staff[staffcounter++]->SaveToFile(out);
        out.close();
    }
    break;
    case 4:
    {
        staff[staffcounter] = new Administrator;
        staff[staffcounter]->signUP();
        ofstream out;
        out.open("DataBase/StaffData/Administrator.txt",ios::app);
        staff[staffcounter++]->SaveToFile(out);
        out.close();
    }
    break;
    }
}

/** Handling Sign in as Student */
void HandlingData::sub_sub_menu_1_sign_in_stduent(int index)
{
    printline("\n\tSuccessfully Logging...^_^",1,2);
    wait_or_clear(1,1);
    int c = -1;
    while (c != 0)
    {
        wait_or_clear(0,1);
        printline("\n\nMAIN MENU -> SIGN IN -> Student ....", 1,14);
        c = get_menu_choise("Add Courses,Show Exams,Show Tables,Show Assignments,Show Practical Exams,Show Quizzes,Show Books", 2);
        switch (c)
        {
        case 1:
            staffLoad[index]->assignCourses();
            system("pause");
            break;
        case 2:
            staffLoad[index]->ShowExams();
            system("pause");
            break;
        case 3:
            staffLoad[index]->ShowTables();
            system("pause");
            break;
        case 4:
            staffLoad[index]->ShowAssignments();
            system("pause");
            break;
        case 5:
            staffLoad[index]->ShowPracticalExams();
            system("pause");
            break;
        case 6:
            staffLoad[index]->ShowQuizzes();
            system("pause");
            break;
        case 7:
            bok.ShowBooks();
            system("pause");
            break;

        case 0:
            return;
        default:
            print_try_again();
            break;
        }
    }
}

/** Handling Sign in as Teaching Assistant */
void HandlingData::sub_sub_menu_1_sign_in_teaching_assistant(int index)
{
    printline("\n\tSuccessfully Logging...^_^",1,2);
    wait_or_clear(1,1);
    int c = -1;
    while (c != 0)
    {
        wait_or_clear(0, 1);
        printline("\n\nMAIN MENU -> SIGN IN -> Teaching Assistant ....", 1, 14);
        c = get_menu_choise("Add Courses,Add Practical Exam,Add Quizzes,Print Students Data", 2);
        switch (c)
        {
        case 1:
            staffLoad[index]->assignCourses();
            system("pause");
            break;
        case 2:
            staffLoad[index]->AddPracticalExam();
            system("pause");
            break;
        case 3:
            staffLoad[index]->AddQuizzes();
            system("pause");
            break;
        case 4:
            print();
            system("pause");
            break;
        case 0:
            return;
        default:
            print_try_again();
            break;
        }
    }
}

/** Handling Sign in as Doctor */
void HandlingData::sub_sub_menu_1_sign_in_doctor(int index)
{
    printline("\n\tSuccessfully Logging...^_^",1,2);
    wait_or_clear(1,1);
    int c = -1;
    while (c != 0)
    {
        wait_or_clear(0, 1);
        printline("\n\nMAIN MENU -> SIGN IN -> Doctor ....", 1, 14);
        c = get_menu_choise("Add Courses,Add Exam,Add Assignments,Print Students Data", 2);
        switch (c)
        {
        case 1:
            staffLoad[index]->assignCourses();
            system("pause");
            break;
        case 2:
            staffLoad[index]->AddExam();
            system("pause");
            break;
        case 3:
            staffLoad[index]->AddAssignments();
            system("pause");
            break;
        case 4:
            print();
            system("pause");
            break;
        case 0:
            return;
        default:
            print_try_again();
            break;
        }
    }
}

/** Handling Sign in as Administrator */
void HandlingData::sub_sub_menu_1_sign_in_admin(int index)
{
    printline("\n\tSuccessfully Logging...^_^",1,2);
    wait_or_clear(1,1);
    int c = -1;
    while (c != 0)
    {
        wait_or_clear(0, 1);
        printline("\n\nMAIN MENU -> SIGN IN -> ADMIN ....", 1);
        c = get_menu_choise("Add Courses,Add Books",2);
        switch (c)
        {
        case 1:
            staffLoad[index]->AddCourses();
            system("pause");
            break;
        case 2:
            bok.addBooks();
            system("pause");
            break;
        case 0:
            return;
        default:
            print_try_again();
            break;
        }
    }
}
