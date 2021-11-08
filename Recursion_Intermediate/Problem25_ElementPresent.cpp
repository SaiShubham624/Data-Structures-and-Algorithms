#include<iostream>
using namespace std;

/*
Problem: You will be given an array and an element. You have to tell that the given
element is in the given array or not, using recursion
*/
/// First Approach (start to end)
bool isElementPresent(int arr[], int n, int element){
    // Base Condition
    if (n == 0) return false;
    // Checking Condition
    if(arr[0] == element){
        return true;
    }
    // Both Recursive and Calculation Part
    return isElementPresent(arr+1, n-1, element);
}

/// Second Approach (end to start)
bool isElementPresent2(int arr[], int n, int element){
    if (n == 0) return false;
    if (arr[n-1] == element) return true;
    return isElementPresent2(arr, n-1, element);
}

/// Third Approach (simulating the for loop)
bool isElementPresent3(int arr[], int n, int element, int i = 0){
    if(i == n) return false;
    if(arr[i] == element) return true;
    return isElementPresent3(arr, n, element, i+1);
}

int main(){
    
    int arr[10] = {1, 13, 14, 56, 78, 79, 80, 34, 67, 99};
    if(isElementPresent3(arr, 10, 566)) cout << "It is there" << endl;
    else cout << "Nope" << endl;
    system("pause"); //For Debugging, ignore it
    return 0;
}