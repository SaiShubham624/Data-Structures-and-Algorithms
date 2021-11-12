#include<iostream>
using namespace std;

/*
Problem: You have to print subsequences of the array arr[] using recursion.
*/

void print(char arr[]){
    if(arr[0] == '\0'){
        cout << endl;
        return;
    }
    cout << arr[0];
    print(arr+1);
}

void subsequencesOfString(char arr[]){
    if(arr[0] == '\0'){
        return;
    }
    print(arr);
    subsequencesOfString(arr+1);
}

int main(){
    char array[] = "abcdef";
    subsequencesOfString(array);
    cout << endl;
    system("pause"); //For Debugging, ignore it
    return 0;
}