/*
Q1. Write a program which takes marks of an exam question wise, where the number of questions
    and total marks for each question will be defined by the user. The program will store marks 
    of the complete class with the roll number of a student along with marks. 

 Example of an Exam of Single Student

Marks Distribution
Total
Question
1
2
3
4
5
Total Marks
15
15
15
15
15
75
Marks Obtained
*/

#include<iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
struct Student {
    string rollNo;
    int totalMarks;
    int noOfQuestions;
    float *obtMarks;

    Student()
    {
        rollNo = "";
        totalMarks = 0;
        noOfQuestions = 0;
        obtMarks = NULL;
    }
};
int main()
{   
    
    int noOfStudents = 0;
    
    cout << "\n Enter the no of students in the class : ";
    cin >> noOfStudents;

     Student s1[noOfStudents];

    for (int i=0; i<noOfStudents; ++i)
    {
        cout << "\n Enter the roll no for student " << i+1 << " : ";
        cin  >> s1[i].rollNo;

        cout << "\n Enter total no of questions : ";
        cin  >> s1[i].noOfQuestions;

        cout << "\n Enter total marks for each question : ";
        cin  >> s1[i].totalMarks;
        
        s1[i].obtMarks = new float[s1[i].noOfQuestions];

        for (int k=0; k < s1[i].noOfQuestions; k++)
        {
              cout << "\n Enter obtained marks in question " << k+1 << " : ";
              cin  >> s1[i].obtMarks[k];
        }
    }
    
    ofstream student("student.txt", ios :: app);
    int i=0;
     while (i < noOfStudents)
     {
        student << s1[i].rollNo        << setw(10)
                << s1[i].noOfQuestions << setw(10)
                << s1[i].totalMarks    << setw(15);

             for (int k=0; k < s1[i].noOfQuestions; k++)
             {
                  student <<  s1[i].obtMarks[k] << " ";
             }   
          student << endl;   
          cout    << endl;
          i++;
     }
     
    return 0;
}