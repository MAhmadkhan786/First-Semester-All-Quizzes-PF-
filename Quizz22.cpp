#include <iostream>
using namespace std;

struct Point {
    int x, y;
    Point()
    {
        x =-1;
        y = -1;
    }

    Point(int val1, int val2)
    {
        x =val1;
        y =val2;
    }
    Point(int val)
    {
        x =val;
        y = val;
    }

};

int main()
{
    Point p1 = {1, 2}, p2(2);   // Another way => p1(1, 2)
    Point* p3 = &p1;
    Point *p4 = new Point ;

    cout << p1.x << " " << p1.y<<endl;
    cout << p2.x << " " << p2.y<<endl;
    cout << p3->x << " " << p3->y<<endl;
    cout << p4->x << " " << p4->y<<endl;
    return 0;
}


/*
Output :
        1  2
        2  2
        1  2
       -1 -1
*/ 
