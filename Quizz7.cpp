
/*
Q1. If the ages of John, Smith and Aria are input by the user, write a program to determine the youngest of the three.
*/
#include<iostream>
using namespace std;

int main()
{
    int johnAge, smithAge, ariaAge;
    
    cout <<"\n Enter the age of John  :";
    cin  >> johnAge;
    cout <<" Enter the age of Smith :";
    cin  >> smithAge;
    cout <<" Enter the age of Aria  :";
    cin  >> ariaAge;

     int youngestAge  = johnAge;

      if (smithAge < youngestAge)
      {
        youngestAge = smithAge;
      }

      if (ariaAge < youngestAge)
      {
        youngestAge = ariaAge;
      }

     cout << "\nThe youngest age of the three is  : " << youngestAge << "\n\n";

    return 0;
}