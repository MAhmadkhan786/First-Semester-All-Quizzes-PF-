/*
Q1. Write a function which takes 10 integers from the user using a loop and print their average value on the screen.
 Name of the function would be determineAverage, call it from main. 
*/

#include<iostream>
using namespace std;

float determineAverage(int arr[])
{
     float sum =0;
     for (int i=0; i<10; i++)
     {
         sum += arr[i];
     }

     sum = sum/10;

     return sum;
}
int main()
{   
    int arr[10];
    for (int i=0; i<10; i++)
    {
        cout << "Enter number "<< i+1 << " : ";
        cin  >> arr[i];
    }    
     cout << " \nThe average of all the ten numbers is : " << determineAverage(arr) << "\n\n";

    return 0;
}