// /*

// Q1. You are given a 2D grid of integers (3x3) representing a simple board game.
//     Each cell in the grid contains a positive integer representing the score you can 
//     obtain when you step on that cell. The goal is to find the maximum score you can 
//     achieve by starting from the top-left corner and moving to the bottom-right corner. 
//     NOTE : Moves allowed are only moving right or down in the grid.

// 4 2 1
// 6 8 2
// 7 3 6

// Possibilities : 
// 4 + 2 + 1+ 2+ 6 = 15
// 4 + 2 + 8+ 2+ 6 = 22
// 4 + 2 + 8+ 3+ 6 = 23
// 4 + 6 + 8+ 2+ 6 = 26
// 4 + 6 + 8+ 3+ 6 = 27
// 4 + 6 + 7+ 3+ 6 = 26

// Maximum should be => 4 + 6 + 8+ 3+ 6 = 27

// */
// #include<iostream>
// using namespace std;

// int MAXROWS = 3;
// int MAXCOLS = 3;

// int main()
// {
//     int arr[MAXROWS][MAXCOLS] = {{4,2,1}, {6,8,2}, {7,3,6}};
//     int max = 0;
                    
//     cout << "\n The original 2D grid is " << endl;               
//       for (int i=0; i<MAXROWS; i++)
//       {
//         for (int j=0; j<MAXCOLS; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout <<"\n";
//       }              
//     int sum = 0; 
//     cout << "\n The maximum score can be " << endl;
//       for (int i=0; i<MAXROWS; i++)
//       {
//         for (int j=0; j<MAXCOLS; j++)
//         {
//             if (i==j || )
//             {
//                 sum += arr[i][j];
//             }
//         }
//       }
      
      
    
//     return 0;
// }