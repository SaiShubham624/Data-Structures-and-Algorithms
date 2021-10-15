#include <iostream>
using namespace std;

/*
Trivia:
    1. The 2D Arrays are just basics matrixs in mathematics implemented in progrmamming
    2. To take the input in the 2d Arrays you have to use the for loop just as you were doing with 
       1D arrays (just change the time complexity i.e. -> O(N) to O(N^2))
    3. When intialising the 2D Array you don't have to give the numbers of rows (it is optional)
*/

int main()
{
    // int twoarray[2][3];
    // cout << "Enter the Values " << endl;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> twoarray[i][j];
    //     }
    // }
    // cout << "Printing the Values " << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << twoarray[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int b[2][3];
    cout << "Enter the Values " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << b[2][1] << endl;
    system("pause"); //For Debugging, ignore it
    return 0;
}