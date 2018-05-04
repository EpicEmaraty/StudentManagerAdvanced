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

    double finalGrade = 0;
    double number = 0; 
    for(int i = 0 ; i<grades.size(); i++)
    {
    number = number + grades[i]; 
    } 
    if(grades.size() !=0)
    {
  finalGrade = number/grades.size(); 
    return finalGrade; 
    } 
    else 
    { 
    return finalGrade = 0; 

}
