#include<iostream>
using namespace std;

/*
Problem:
You have to find the n(th) number in the Fibbonaci Series
*/

int fibbonaci(int n){
    if(n <= 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    return fibbonaci(n-2) + fibbonaci(n-1);
}

int main(){

    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = fibbonaci(n);
    cout << "The Fibbonaci of " << n << " is " << ans << endl;

    system("pause"); //For Debugging, ignore it
    return 0;
}