#include<iostream>
using namespace std;

/*
Solving the Previous Problem using PMI (Principle of Mathematical Induction)
*/

int factorial(int n){
    if(n == 0) return 1; // Base Case
    int smallAns = factorial(n-1); // Recursive Case/Induction Hypothesis
    int ans = n * smallAns; // Induction Step
    return ans;
}

int main(){

    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = factorial(n);
    cout << "The Factorial of " << n << " is " << ans << endl;

    system("pause"); //For Debugging, ignore it
    return 0;
}