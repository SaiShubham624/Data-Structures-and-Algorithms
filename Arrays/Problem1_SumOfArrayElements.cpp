#include<iostream>
using namespace std;
/*
Problem: You have to find the sum of the elements of a given array
*/

int elementSum(int arr[], int n){
    if (n <= 0) return 0;
    return elementSum(arr + 1, n - 1) + *arr;
}

int main()
{
    int a[10] = {10, 2, 4, 6, 1, 3};


    // Way 1: Use a Loop
    int sum = 0;
    for(int i=0; i<10; i++){
        sum = sum + a[i];
    }
    cout << sum << endl;


    // Way 2: Use Recursion
    int sum = elementSum(a, 10);
    cout << sum << endl;
    
    return 0;
}
