#include<iostream>
using namespace std;

/*
Problem: 
    You have to raise a number x to power n using recursion
*/

int power(int x, int n){
    // Base Case
    if(n == 0){
        return 1;
    }
    // Recursive Case or Induction Hypothesis
    int recursive_case = power(x, n-1);

    // Calculation or Induction Step 
    return x * recursive_case;
}

int main(){

    
    int n, x;
    cout << "Enter the number: ";
    cin >> x;
    cout << "The power to raise to: ";
    cin >> n;
    int ans = power(x, n);
    cout << x << " raised to the power " << n << " is " << ans << endl;


    system("pause"); //For Debugging, ignore it
    return 0;
}