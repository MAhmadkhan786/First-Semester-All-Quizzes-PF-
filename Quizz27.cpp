/*
Q1. Given an array of integers, determine the second lowest number
int num is an array of integers with numbers in it
int total is the size of num array
int return data type is the second lowest number from the array

int secondLowestNumber(int num[], int total);
*/


#include<iostream>
using namespace std;

int secondLowestNumber(int num[], int total)
{
        // First we will sort the array in ascending order
        // Then return the index 1 (second element)
     
     int minIndex = 0;
     
     for (int i=0; i<total; i++)
     {
        int minIndex =  i;

        for (int j=i+1; j<total; j++)
        {
            if(num[j] < num[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = num[i];
            num[i] = num[minIndex];
            num[minIndex] = temp;
     }

 return num[1];

}

int main()
{   
    
    int arr[] = {99,22,11,100,13};
    int total = sizeof(arr)/sizeof(arr[0]);        // sizeof(num) = 20 ; sizeof(num[0]) = 4;
    int result = secondLowestNumber(arr, total);   // Hence total = 5;
     cout << result << endl;
     return 0;
}