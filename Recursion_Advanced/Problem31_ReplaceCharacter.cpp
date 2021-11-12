#include<iostream>
using namespace std;

/*
Problem:
    You have to replace the oldElement with newElement in the array arr[] using recursion.
*/

// Solution
void replace(char arr[], char oldElement, char newElement){
    if(arr[0] == '\0') return;
    if(arr[0] == oldElement){
        arr[0] = newElement;
    }
    replace(arr+1, oldElement, newElement);
}

int main(){
    char array[] = "abc";
    replace(array, 'c', 'd');
    cout << array << endl;
    system("pause"); //For Debugging, ignore it
    return 0;
}