#include<iostream>
using namespace std;

/*
Problem: 
    You have to find the last indice/index of x in array arr[] of size n. You can also
    add your own variables. You have to this with recursion
*/

// Solution
int lastIndex(int arr[], int n, int element){
    if(n == 0){
        return -1;
    }
    if(arr[n-1] == element){
        return n;
    }
    return lastIndex(arr, n-1, element);
}

int main(){
    // Function Testing
    int arr[5] = {2, 3, 44, 5};
    cout << lastIndex(arr, 5, 2) << endl;

    system("pause"); //For Debugging, ignore it
    return 0;
}