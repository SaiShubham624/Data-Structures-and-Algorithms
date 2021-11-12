#include<iostream>
using namespace std;

/*
Problem:
    You have to print character array arr[] using Recursion.
    Print it in normal order and in reverse order.
*/

void print(char arr[]){
    if(arr[0] == '\0') return;
    cout << arr[0];
    print(arr+1);
}

void reversePrint(char arr[]){
    if(arr[0] == '\0'){
        return;
    }
    reversePrint(arr+1);
    cout << arr[0];
}

int main(){
    char array[] = "Sai Shubham";
    cout << "If the array is printed normally " << endl;
    print(array);
    cout << endl;
    cout << "If the array is printed in reverse " << endl;
    reversePrint(array);
    return 0;
}