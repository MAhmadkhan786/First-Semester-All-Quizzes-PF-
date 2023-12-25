/*
Q1. Write a C++ program to swap the first and last element of an integer array of size 10.
*/
#include<iostream>
using namespace std;

int main()
{
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int temp = arr[0];
    arr[0] = arr[9];
    arr[9] = temp;
    
    cout <<"\n" ;
    for (int i=0; i<10; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}
