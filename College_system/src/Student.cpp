#include "Student.h"

Student::Student()
{
    type = "Student";
}

Student::~Student()
{
    //dtor
}

Student::Student(string id,string name,string phone,string email,string gender,string address,string age)
{
    this->id = id;
    this->name = name;
    this->phone = phone;
    this->email = email;
    this->address = address;
    this->gender = gender;
    this->age = age;
    type = "Student";
}

void Student::signUP()
{
    bool flag = true;
    cout << "\n\t\t  Username : ";
    cin >> username;
    cout << "\t\t  Password : ";
    cin >> password;
    do
    {
        cout << "\t\t  Enter password Again : ";
        cin >> passwordvalidaition;
        if(password!=passwordvalidaition)
        {
            flag = false;
            cout << "\t\t  Unsimilar password ..." << endl;
        }
        else
        {
            flag = true;
        }
    }
    while(!flag);
     cout<<"\t\t  Enter ID : ";
     cin>>id;
     cout<<"\t\t  Enter Name : ";
     cin.ignore();
     getline(cin,name);
     cout<<"\t\t  Enter Email : ";
     cin>>email;
     cout<<"\t\t  Enter Phone : ";
     cin>>phone;
     cout<<"\t\t  Enter Address : ";
     cin>>address;
     cout<<"\t\t  Enter Gender : ";
     cin>>gender;

}

void Student::saveToFile(ofstream& out)
{
    out << id<<","
        <<name<<","
        <<phone<<","
        <<email<<","
        <<gender<<","
        <<address<<","
        <<age<<","
        <<type
        <<endl;
}
void Student::loadFromFile(ifstream& in)
{
    getline(in,id,',');
    getline(in,name,',');
    getline(in,phone,',');
    getline(in,email,',');
    getline(in,gender,',');
    getline(in,address,',');
    getline(in,age,',');
    getline(in,type);
}

void Student::print()
{
    StaffData::print();
}
