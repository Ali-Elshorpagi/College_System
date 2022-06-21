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
        printline("\n\nMAIN MENU -> Sing in -> Student -> Print Exams ....",1,14);
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
            printline("\n\nMAIN MENU -> Sing in -> Student -> Print Exams -> First Year ....",1,14);
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
            printline("\n\nMAIN MENU -> Sing in -> Student -> Print Exams -> Second Year ....",1,14);
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
            printline("\n\nMAIN MENU -> Sing in -> Student -> Print Exams -> Third Year ....",1,14);
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
            printline("\n\nMAIN MENU -> Sing in -> Student -> Print Exams -> Fourth Year ....",1,14);
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
        printline("\n\nMAIN MENU -> Sing in -> Student -> Print Tables ....",1,14);
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
            printline("\n\nMAIN MENU -> Sing in -> Student -> Print Tables -> First Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,10);
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
            printline("\n\nMAIN MENU -> Sing in -> Student -> Print Tables -> Second Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,10);
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
            printline("\n\nMAIN MENU -> Sing in -> Student -> Print Tables -> Third Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,10);
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
            printline("\n\nMAIN MENU -> Sing in -> Student -> Print Tables -> Fourth Year ....",1,14);
            int n2 =-1;
            printline("\t\t\t[1].Semester One :\n\t\t\t[2].Semester Two :",1,10);
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
