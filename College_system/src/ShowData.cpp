#include "ShowData.h"

ShowData::ShowData()
{

}

ShowData::~ShowData()
{

}

void ShowData::ShowExams()
{
    int n=-1;
    while(n!=0)
    {
        system("cls");
        printline("\n\nMAIN MENU -> Sing in -> Student -> Show Exams ....",1,14);
        printline("\t\t\t[1].First Year :\n\t\t\t[2].Second Year :\n\t\t\t[3].Third Year :\n\t\t\t[4].Fourth Year :",1,10);
        printline("\t\t\t[0].RETURN BACK :",1,5);
        printline("ENTER YOUR CHOICE :",false,8);
        cin>>n;
        switch(n)
        {
        case 0:
            break;
        case 1:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Exams -> First Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Exams\\FirstYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Exams\\FirstYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 2:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Exams -> Second Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Exams\\SecondYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Exams\\SecondYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 3:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Exams -> Third Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Exams\\ThirdYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Exams\\ThirdYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 4:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Exams -> Fourth Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Exams\\FourthYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Exams\\FourthYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        default:
            printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
            Sleep(500);
        }
    }
}

void ShowData::ShowTables()
{
    int n=-1;
    while(n!=0)
    {
        system("cls");
        printline("\n\nMAIN MENU -> Sing in -> Student -> Show Tables ....",1,14);
        printline("\t\t\t[1].First Year :\n\t\t\t[2].Second Year :\n\t\t\t[3].Third Year :\n\t\t\t[4].Fourth Year :",1,10);
        printline("\t\t\t[0].RETURN BACK :",1,5);
        printline("ENTER YOUR CHOICE :",false,8);
        cin>>n;
        switch(n)
        {
        case 0:
            break;
        case 1:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Tables -> First Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                system("DataBase\\Tables\\FirstYear\\Semester_One.pdf");
                system("pause");
                break;
            case 2:
                system("DataBase\\Tables\\FirstYear\\Semester_Two.pdf");
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 2:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Tables -> Second Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                system("DataBase\\Tables\\SecondYear\\Semester_One.pdf");
                system("pause");
                break;
            case 2:
                system("DataBase\\Tables\\SecondYear\\Semester_Two.pdf");
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 3:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Tables -> Third Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                system("DataBase\\Tables\\ThirdYear\\Semester_One.pdf");
                system("pause");
                break;
            case 2:
                system("DataBase\\Tables\\ThirdYear\\Semester_Two.pdf");
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 4:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Tables -> Fourth Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                system("DataBase\\Tables\\FourthYear\\Semester_One.pdf");
                system("pause");
                break;
            case 2:
                system("DataBase\\Tables\\FourthYear\\Semester_Two.pdf");
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        default:
            printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
            Sleep(500);
        }
    }
}


void ShowData::ShowAssignments()
{
    int n=-1;
    while(n!=0)
    {
        system("cls");
        printline("\n\nMAIN MENU -> Sing in -> Student -> Show Assignments ....",1,14);
        printline("\t\t\t[1].First Year :\n\t\t\t[2].Second Year :\n\t\t\t[3].Third Year :\n\t\t\t[4].Fourth Year :",1,10);
        printline("\t\t\t[0].RETURN BACK :",1,5);
        printline("ENTER YOUR CHOICE :",false,8);
        cin>>n;
        switch(n)
        {
        case 0:
            break;
        case 1:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Assignments -> First Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Assignments\\FirstYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Assignments\\FirstYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 2:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Assignments -> Second Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Assignments\\SecondYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Assignments\\SecondYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 3:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Assignments -> Third Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Assignments\\ThirdYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Assignments\\ThirdYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 4:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Assignments -> Fourth Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Assignments\\FourthYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Assignments\\FourthYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        default:
            printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
            Sleep(500);
        }
    }
}


void ShowData::ShowPracticalExams()
{
    int n=-1;
    while(n!=0)
    {
        system("cls");
        printline("\n\nMAIN MENU -> Sing in -> Student -> Show Practical Exams ....",1,14);
        printline("\t\t\t[1].First Year :\n\t\t\t[2].Second Year :\n\t\t\t[3].Third Year :\n\t\t\t[4].Fourth Year :",1,10);
        printline("\t\t\t[0].RETURN BACK :",1,5);
        printline("ENTER YOUR CHOICE :",false,8);
        cin>>n;
        switch(n)
        {
        case 0:
            break;
        case 1:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Practical Exams -> First Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\PracticalExams\\FirstYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\PracticalExams\\FirstYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 2:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Practical Exams -> Second Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\PracticalExams\\SecondYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\PracticalExams\\SecondYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 3:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Practical Exams -> Third Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\PracticalExams\\ThirdYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\PracticalExams\\ThirdYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 4:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Practical Exams -> Fourth Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\PracticalExams\\FourthYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\PracticalExams\\FourthYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        default:
            printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
            Sleep(500);
        }
    }
}

void ShowData::ShowQuizzes()
{
        int n=-1;
    while(n!=0)
    {
        system("cls");
        printline("\n\nMAIN MENU -> Sing in -> Student -> Show Quizzes ....",1,14);
        printline("\t\t\t[1].First Year :\n\t\t\t[2].Second Year :\n\t\t\t[3].Third Year :\n\t\t\t[4].Fourth Year :",1,10);
        printline("\t\t\t[0].RETURN BACK :",1,5);
        printline("ENTER YOUR CHOICE :",false,8);
        cin>>n;
        switch(n)
        {
        case 0:
            break;
        case 1:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Quizzes -> First Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Quizzes\\FirstYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Quizzes\\FirstYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 2:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Quizzes -> Second Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Quizzes\\SecondYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Quizzes\\SecondYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 3:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Quizzes -> Third Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Quizzes\\ThirdYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Quizzes\\ThirdYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        case 4:
        {
            system("cls");
            printline("\n\nMAIN MENU -> Sing in -> Student -> Show Quizzes -> Fourth Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,9);
            printline("\t\t\t[0].RETURN BACK :",1,5);
            printline("ENTER YOUR CHOICE :",false,8);
            cin>>n2;
            switch(n2)
            {
            case 0:
                break;
            case 1:
                ShellExecute(NULL, "open","DataBase\\Quizzes\\FourthYear\\SemesterOne", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            case 2:
                ShellExecute(NULL, "open","DataBase\\Quizzes\\FourthYear\\SemesterTwo", NULL, NULL, SW_SHOW);
                system("pause");
                break;
            default:
                printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
                Sleep(500);
            }
        }
        break;
        default:
            printline("\n\n\nInvalid Choice Try Again!!!!!!!!",1,4);
            Sleep(500);
        }
    }
}
