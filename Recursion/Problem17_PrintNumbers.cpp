#include<iostream>
using namespace std;

/*
Problem:
    You have to print numbers from 1 to n using recursion
*/

void print(int n){
    // Base Case
    if(n==0){
        return;
    }
    // Recursive Case or Induction Hypothesis
    print(n-1);

    // Calculation or Induction Step
    cout << n << endl;
}

int main(){

    cout << "This program prints the numbers from 1 to n" << endl;
    int n;
    cout << "Enter the number(n): ";
    cin >> n;
    print(n);
    system("pause"); //For Debugging, ignore it
    return 0;
}