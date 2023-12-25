// /*
// A company decided to give a bonus of 5% to an employee if his/her year of service is more than 5 years 
// and the bonus percentage is a product of 5% with a number of years beyond five years of service.
// Ask users for their salary and year of service and print the net bonus amount.
// */

#include<iostream>
using namespace std;

int main()
{
    int salary, yearsOfservice, beyondYears;

    float bonusPercentage = 0.0;
    float totalSalary, bonusAmount;

    cout << "\n Enter your salary : ";
    cin  >> salary;

    cout << "\n Enter the years of service : ";
    cin  >> yearsOfservice;
      
      if (yearsOfservice > 5)
      {
        beyondYears = yearsOfservice - 5;
        bonusPercentage = (beyondYears*5.0)/100.0;
        bonusAmount = bonusPercentage*salary;

        cout << " \n The net bonus is :  " << bonusAmount << endl;

        totalSalary = bonusAmount + salary;
        cout << " \n Your salary is : " << totalSalary << "\n\n";
        
      }
      else
      {
        cout << " \nNo bonus for less than 5-years experience ! " << "\n\n";
      }
  
    return 0;
}
