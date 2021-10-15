#include <iostream>
using namespace std;

/*
Problem: You have to reverse the given array (not print it!)
*/

int main()
{
    int arr[5] = {12, 23, 13, 45, 89};
    cout << "Original Order" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    int s = 0;
    int e = 4;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    cout << "Reversed Order" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}