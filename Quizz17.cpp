/*

Q1. Write a C++ program to find the Diagonal Sum of a 2D-Matrix.
Hint: The Matrix should be square (i.e. the number of rows is equal to the number of columns).

*/

#include<iostream>
using namespace std;

int main()
{
     int rows =0, cols=0,sum=0;

     cout << "Enter the number of rows ";
     cin >> rows;

     cout << "Enter the number of columns ";
     cin >> cols;

    int arr[rows][cols];

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            cin >> arr[i][j];
        }
    }

   cout << " The matrix you entered is " << endl;
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    

   
   for (int i=0; i<rows; i++)
   {
    for (int j=0; j<cols; j++)
    if (i==j){
        sum+= arr[i][j];
    }
   }

      cout << "\n The sum of the diagonal is " << sum << endl;    
    
    return 0;
}