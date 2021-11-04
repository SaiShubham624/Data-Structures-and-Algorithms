#include<iostream>
using namespace std;

/*
Recursion is a algo in which the function is calling itself. It is used when a solution of the
problem depends on the smaller part of the problem
*/

int fact(int n){
    if(n == 1) return 1;
    return n * fact(n-1);
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = fact(n);
    cout << "The Factorial of " << n << " is " << ans << endl;
    system("pause"); //For Debugging, ignore it
    return 0;
}