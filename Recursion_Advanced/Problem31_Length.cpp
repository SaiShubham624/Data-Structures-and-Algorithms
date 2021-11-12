#include<iostream>
using namespace std;

/*
Problem:
    You have to find the length of the character array arr[] using recursion.
*/

// Solution
int len(char arr[]){
    if(arr[0] == '\0') return 0;
    return 1 + len(arr+1);
}

int main(){

    char array[20];
    cout << "Enter your Name or any word: ";
    cin.getline(array, 20);

    cout << "The length of the word/your name is " << len(array) << endl;
    system("pause");
    return 0;
}