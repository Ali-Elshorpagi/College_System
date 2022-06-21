#include "StaffData.h"

StaffData::StaffData()
{

}

StaffData::~StaffData()
{

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

void StaffData::printDoctors()
{
    printline("\n\t\tID :",false);
    printline(id);
    printline("\t\tName :",false);
    printline(name);

}

