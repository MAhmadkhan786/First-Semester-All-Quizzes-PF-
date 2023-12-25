
/*
Q1. Define a structure for a rectangle with length and width as attributes. 
    Write a program to calculate the perimeter of two rectangles.
*/

#include<iostream>
using namespace std;

struct Rectangle{
    float length, width;

    Rectangle()
    {
       length = 0.0;
       width = 0.0;
    }

float CalculatePerimeter()
    {
        float result = 2*(length + width);      // Another way of writing it is :
        return result;                          // 2*(this->length + this->width)
    }
};

int main()
{
    Rectangle R1;
    Rectangle R2;

    cout << "\n Enter the length of the rectangle 1 : ";
    cin  >> R1.length;
    cout << " Enter the width of the rectangle 1 : ";
    cin  >> R1.width;

    cout << "\n Enter the length of the rectangle 2 : ";
    cin  >> R2.length;
    cout << " Enter the width of the rectangle 2 : ";
    cin  >> R2.width;

    cout << "\n The perimeter of first rectangle is : "  << R1.CalculatePerimeter () << endl;
    cout << " The perimeter of second rectangle is : "   << R2.CalculatePerimeter () << endl;

    return 0;
}