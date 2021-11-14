#include<iostream>
using namespace std;

/*
Problem: You have to print the permutations of the given string using recursion.
*/

// Solution
void printPermuatations(char array[], int n=0){
    if(array[n] == '\0'){
        cout << array << endl;
        return;
    }
    for (int i = n; array[i] != '\0'; i++)
    {
        swap(array[i], array[n]);
        printPermuatations(array, n+1);
        swap(array[i], array[n]);
    }
}