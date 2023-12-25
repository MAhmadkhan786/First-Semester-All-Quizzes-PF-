
/*
Write a C++ program to implement a function to calculate the power of a number.
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
int determinePower2(int n, int p)
{   
    int pow = n;

    for (int i=0; i<p-1; i++)
    {
         pow = pow*n;
    }
    return  pow;
}

int determinePower3(int n, int p)
{
     int result = 1;

     for(int i=0; i<p; i++)
     {
        result *= n; 
     }
     return result;
}

int main()
{    
    int num = 0, power = 0;
    cout << "\n Enter number : ";
    cin >> num;
    cout << "\n Enter the power : ";
    cin >> power;

    cout <<"\n"<< num << " raised to power " << power << " is : " << determinePower(num, power) <<"\n";
    cout <<"\n"<< num << " raised to power " << power << " is : " << determinePower2(num, power) <<"\n"; 
    cout <<"\n"<< num << " raised to power " << power << " is : " << determinePower3(num, power) <<"\n\n"; 
    return 0;
}