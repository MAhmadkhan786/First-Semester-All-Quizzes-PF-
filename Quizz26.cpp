/*
Q1. Write a function which converts a given decimal number to binary?
int num is the decimal number to be converted
int bits are the number of bits the binary should have 
int * return data type is the pointer of integer array of bits (0’s and 1’s)

int * convertToBinary(int num, int bits);
*/

#include<iostream>
#include<algorithm>
using namespace std;
int * convertToBinary(int n, int bits)
{
       int *arr = new int[bits];
       
           for (int i=0; i<bits; i++)
           {
              arr[i] = n%2 ;
              n = n/2;
           }  
       reverse (arr, arr+bits);           // Used Algorithm library to reverse the array.

       return arr; 
}
int main()
{
    int num ;
    int bits = 8;
    cout << "\n Enter a decimal number to convert it into binary : ";
     cin  >> num;

     
     cout << sizeof(num , bits);
     int *binaryResult = convertToBinary(num, bits);
     cout << "\n The binary conversion of " << num << " with " << bits << " bits is  : "   << endl;

      for (int k=0; k<bits; k++)
      {
         cout << binaryResult[k];
      }
      delete[]binaryResult;

    return 0;
}