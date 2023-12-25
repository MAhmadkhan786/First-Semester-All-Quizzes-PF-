/*

Q1. Assuming that a text file named “first.txt” contains some text written into it.
    Write a function named copyupper(), that reads the file “first.txt” and creates a 
    new file named “second.txt” contains all words from the file “first.txt” in uppercase.
    Hint : The following code can convert an uppercase to a character.
    char ch ='a';
    cout <<(char)toupper(ch)<<endl;

*/

#include<iostream>
#include <fstream>
#include <string>
using namespace std;

void copyupper(string firstFileName)
{    
    string line = "";

    ifstream first(firstFileName, ios :: in);
    if (!first.is_open())
    {
        cout << "\n Error opening the file ! " << endl;
    }
    ofstream second("second.txt", ios :: app);
    while(getline(first, line))                   // Reading lines one by one.
    {  
         char uppercase[line.length()];
         for (int i=0; i<line.length(); i++)
         {
            uppercase[i] = (char)toupper(line[i]) ;       // Converting every letter to uppercase.
            cout   << uppercase[i];
            second << uppercase[i];
         }
             second << endl;
            cout   << endl;       
    }

    first.close();
    second.close(); 
}

int main()
{
    string fileName = "first.txt";

    copyupper(fileName);
    
    return 0;
}


