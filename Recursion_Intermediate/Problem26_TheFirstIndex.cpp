#include<iostream>
using namespace std;

/*
Problem:
    You have find the first occurence of x in array arr[] of size n
*/

/// You don't need to provide the fourth param
int firstIndex(int arr[], int n, int element, int i = 0){
    if(i == n){
        return -1;
    }
    if(arr[i] == element){
        return i+1;
    }
    return firstIndex(arr, n, element, i+1);
}

int main(){

    int arr[4] = {2, 2, 1, 2};
    cout << firstIndex(arr, 4, 1);
    system("pause"); //For Debugging, ignore it
    return 0;
}