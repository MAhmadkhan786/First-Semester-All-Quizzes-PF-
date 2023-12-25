/*
Q1. Write a program to compare two dates entered by the user. Make a structure named Date 
    to store the elements day, month and year to store the dates. If the dates are equal,
    display "Dates are equal" otherwise in display mention which date is greater ?
*/


#include<iostream>
using namespace std;

struct Date{
    int day;
    int month;
    int year;

    Date()
    {
        day = 0;
        month = 0;
        year =  0;
    }

bool isEqual(const Date &d2)
{
    if (this->day == d2.day && this->month == d2.month && this->year == d2.year) 
    {
        return true;
    }
    return false; 
}

bool isGreater(Date &d2)
{
    if (this->year > d2.year)
    {
        return true;
    }
    else if(this->month > d2.month)
    {
        return true;
    }
    else if(this->day > d2.day)
    {
        return true;
    }
    else 
    {
        return false;
    }
}


};
int main()
{
     Date d1;
     Date d2;

     cout << " \n Enter date 1 " << endl;
     cout << " Enter day : ";
     cin  >> d1.day;
     cout << " Enter month : ";
     cin  >> d1.month;
     cout << " Enter year : ";
     cin  >> d1.year;

     cout << " \n Enter date 2 " << endl;
     cout << " Enter day : ";
     cin  >> d2.day;
     cout << " Enter month : ";
     cin  >> d2.month;
     cout << " Enter year : ";
     cin  >> d2.year;

    if (d1.isEqual(d2)) 
    {
        cout << " Dates are equal " << endl;
    }
    else 
    {
           if (d1.isGreater(d2)){
                 cout << "\n Date 1 is greater  !" << endl;
           }  
           else 
           {
                 cout << "\n Date 2 is Greater ! " << endl;
           }
    }

    return 0;
}