/*
Q1. Write a C++ program that reverses a string and prints it on the screen through a character array.
*/

#include<iostream>
using namespace std;

int main()
{
    
    string s;
    cout << " Enter a string : ";
    getline(cin, s);

    char *s1 = new char[s.length()];

    int j = 0;

    for (int i=s.length()-1; i>=0 ;i--)
    {  
             s1[j] = s[i];
             j++;      
    }
    cout << "\n The reversed string is " << "\n\n";
    
    for (int k=0; k< s.length(); k++)
    {
        cout << s1[k];
    }

    delete[]s1;

    return 0;
}