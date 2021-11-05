#include<iostream>
using namespace std;

/*
Problem:
    You have count the number of digits using recursion
*/

int countDigits(int n){
    // Base Condition
    if(n<10 && n>=1){
        return 1;
    }
    // Constraint
    if(n<1){
        return -1;
    }
    // Recursive Case or Induction Hypothesis
    int recursive_case = countDigits(n/10);

    // Calculation or Induction Step
    return 1 + recursive_case;
}

int main(){

    cout << "This program counts the number of digits in the number n" << endl;
    
    while(1){
        int n;
        cout << "Enter the number(n): ";
        cin >> n;
        int ans = countDigits(n);
        if (ans != -1)
        {
            cout << "The number of digits in " << n << " is " << countDigits(n) << endl;
            break;
        }else{
            cout << "The given number should be a natural number" << endl;
        }
    }
    
    

    system("pause"); //For Debugging, ignore it
    return 0;
}