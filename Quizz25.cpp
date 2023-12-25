/*
Q1.Write a program that repeatedly collects positive integers from the user,
   stopping when the user enters a negative number or zero. After that, print
   a list of positive odd numbers?
*/

#include<iostream>
using namespace std;

int main()
{
    int  arr[100];
    int  itr = 0;
    int  i = 0;
    while(true)
    {
          cout << " Enter a positive integer (or a negative number to exit) : ";
          cin >> arr[i];
          if(arr[i] <= 0)
          {
            itr++;
          }
          if (itr == 1)
          {
            break;
          }
         i++;
    }

    for (int k=0; k<i; k++){
        if (arr[k]%2 == 1){
            cout << arr[k] << " ";
        }
    }

    return 0;
}