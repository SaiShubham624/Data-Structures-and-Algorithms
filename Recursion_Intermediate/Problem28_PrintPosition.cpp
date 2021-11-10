#include<iostream>
using namespace std;

/*
Problem:
    You have print all the indices of x in array arr[] of size n using recursion
*/

// Solution
void allPosition(int arr[], int n, int element){
    if(n == 0){
        return;
    } 
    allPosition(arr, n-1, element);
    if(arr[n-1] == element){
        cout << "The Position is " << n-1 << endl;
    }
}

int main(){
    // Testing Code
    int arr[4] = {2, 2, 3, 2};
    allPosition(arr, 4, 2);
    system("pause");
    return 0;
}