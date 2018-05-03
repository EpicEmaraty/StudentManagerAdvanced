#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void student::setName(string first, string last)
{

firstName = first;
lastName = last;
}

string student::fullName()
{

string full;
full.append(firstName);
full.append(" ");
full.append(lastName);
return full;
}

void student::addGrade ( double mark)
{

grades.push_back(mark);

}

double student::getScore ()
{

double temp = 0;

for (int i = 0; i < grades.size(); i++)
{

temp += grades[i];

}
double total = temp / grades.size();

return total;

}
