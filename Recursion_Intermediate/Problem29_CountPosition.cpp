#include<iostream>
using namespace std;

/*
Problem:
    You have to count how many x(s) are there in the array arr[] of size n using
    recursion
*/

// Solution
int countOccurenceOfAElement(int arr[], int n, int x){
    if(n == 0){
        return 0;
    }
    int recursiveCase = countOccurenceOfAElement(arr, n-1, x); 
    if(arr[n-1] == x){
        return 1 + recursiveCase;
    }else{
        return recursiveCase;
    }
}

int main(){
    // Testing Code
    int arr[7] = {2, 2, 5, 6, 1, 2, 2};    
    cout << countOccurenceOfAElement(arr, 7, 2) << endl;
    // The Ouput: 4
    system("pause");
    return 0;
}