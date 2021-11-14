#include<iostream>
using namespace std;

/*
Problem: Find the number of ways to reach n
*/


// Solution
int staircase(int n){
    if(n==0||n==1){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return staircase(n-1) + staircase(n-2) + staircase(n-3);
}

int main(){
    int n;
    cout << "Enter the Number (n)"<< endl << "> ";
    cin >> n;
    cout << "The number of ways to reach step " << n << " is " << staircase(n) << endl;   
    system("pause");
    return 0;
}