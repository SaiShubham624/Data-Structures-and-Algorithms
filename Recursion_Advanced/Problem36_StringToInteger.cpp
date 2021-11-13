#include<iostream>
using namespace std;

/*
Problem:  
    You have to convert string/character array inputArr[] into integer using recursion.
*/

int len(char arr[]){
    if(arr[0] == '\0') return 0;
    return 1 + len(arr+1);
}

int stringToInteger(char inputArr[], int n){
    if(n==0){
        return 0; 
    }
    int recursiveCase = stringToInteger(inputArr, n-1);
    int lastDigit = inputArr[n-1] - '0';
    return recursiveCase * 10 + lastDigit;
}

int main(){
    char array[] = "12345";
    int n = len(array);
    int result = stringToInteger(array, n);
    cout << result << endl;
    system("pause"); //For Debugging, ignore it
    return 0;
}