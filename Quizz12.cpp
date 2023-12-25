
/*
Q1. Write a C++ program to implement a function to calculate the power of a number through recursion.
*/

#include<iostream>
using namespace std;

int determinePower(int n, int p)
{
    if(p == 0)
    {
        return 1;
    }
    else 
    {
        return n*determinePower(n, p-1);
    }
}
int main()
{
    int num = 0, power = 0;
    cout << "\n Enter number : ";
    cin >> num;
    cout << "\n Enter the power : ";
    cin >> power;

    cout <<"\n"<< num << " raised to power " << power << " is : " << determinePower(num, power) <<"\n\n";

    return 0;
}