#include<iostream>
using namespace std;

/*
Problem: You have to add m, n times. Basically multiply m without using * operator
*/

int multi(int m, int n){
    if(n == 0) return 0;
    return m + multi(m, n-1);
}

int main(){

    cout << "This is a program which adds m, n times" << endl;
    int n, m;
    cout << "Enter the multiplicand(m): ";
    cin >> m;
    cout << "Enter the multiplier(n): ";
    cin >> n;
    int ans = multi(m, n);
    cout << "The Product is " << ans << endl;

    system("pause");    
    return 0;
}
