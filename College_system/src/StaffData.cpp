#include "StaffData.h"

StaffData::StaffData()
{

}

StaffData::~StaffData()
{

}

void StaffData::print()
{
    cout<<std::left;
    cout<<setw(6)<<id
        <<setw(6)<<name
        <<setw(6)<<phone
        <<setw(6)<<email
        <<setw(6)<<gender
        <<setw(6)<<address
        <<setw(6)<<birthDate
        <<setw(6)<<type;
    cout<<endl;
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
