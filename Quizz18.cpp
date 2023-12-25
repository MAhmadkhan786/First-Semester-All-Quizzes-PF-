
#include <iostream>
using namespace std;

int main ()
{
int numbers[5];
  int * p;
  p = &numbers[2];  
  *p = 130;
  p = numbers + 3;  
  *p = 14;
  p = numbers;  
  *(p+4) = 150;
  p = numbers;  
  *p = 100;
  p++;  
  *p = 20;
  for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";
  return 0;

}

/* 
    p[2] = 130
    p[3] = 14
    p[0] = 
    p[4] = 150
    p[0] = 100
    p[1] = 20

Output  :

    100 , 20, 130, 14, 150

*/
  
