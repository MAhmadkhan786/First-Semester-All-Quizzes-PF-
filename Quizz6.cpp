/*
Q3. Write C++ code snippet for the following: (Use back side of this paper)
        • Declare a variable of type integer called age and initialize it with the value 20.
        • Declare a variable of type decimal number called height and initialize it with the value 5.0.
        • Later take these as input from the user and display the product of both variables
*/

#include<iostream>
using namespace std;

int main()
{

    int age  = 20;
    float height = 5.0;
    double product;

    cout << "\n Enter your age : ";
    cin >> age;

    cout << "\n Enter your height : ";
    cin >> height;

    cout << "\n Your age is " << age << endl;
    cout << "\n Your height is  " << height << endl;

    // Product 

      product = age*height;

    cout << "\n The product of age and height is : " << product << endl;

    return 0;
}