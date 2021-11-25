#include<iostream>
using namespace std;

/*
Problem:
You have to find the n(th) number in the Fibbonaci Series
*/

// Recursive Approach
int fibbonaci(int n){
    if(n <= 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    return fibbonaci(n-2) + fibbonaci(n-1);
}

// Iterative Approach
int fib(int n){
    int a = 0, b = 1, c, i;
    if (n == 0){
        return a;
    }
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(){

    int n = 4;
    int ans = fib(n);
    cout << "Answer is " << ans << endl;
    // system("pause"); //For Debugging, ignore it
    return 0;
}