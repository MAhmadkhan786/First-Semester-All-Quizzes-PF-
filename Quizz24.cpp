/*
Q1. Write a function that returns the length of a string (char *), excluding the terminating character.
    It should not use any predefined functions. You may use arithmetic and dereference operators.
    int getLength ( char * str);
*/

#include <iostream>
using namespace std;

int simpleWay(string s)
{
    int count = 0;
    for (int i=0; s[i]!='\0'; i++)
    {
        count++;
    }
    cout << " The length of the string is " << count << endl;

    return count;
}
int advanceWay(char* str)
{
      int count = 0;
      while (*str!= '\0'){
          str++;
          count ++;
      }
      return count;
}
int main()
{
    string s;
    cout << "\n Enter a string to find its length : ";    // cout << s.length();
    getline(cin, s);
    int simple = simpleWay(s);
    cout << "\n The length of the string is " << simple << endl;

   char s1[] = "";
   cout << "\n Enter a string to find its length : ";
   cin  >> s1;
   int advance = advanceWay(s1);
   cout << "\n The length of the string is " << advance << endl;
    
  return 0;
}

