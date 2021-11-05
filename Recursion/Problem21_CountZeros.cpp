#include<iostream>
using namespace std;

int countZero(int n){
    if(n == 0) return 0;
     int smallAns = countZero(n/10);
    int last_digit = n%10;
    
    if(last_digit==0){
        return 1 + smallAns;
    }else{
        return smallAns;
    }
}

int main(){
    int n;
    cout << "This program finds the number of zeros in n" << endl;

    cout << "Enter the Number(n): " << endl;
    cin >> n;

    cout << "The Number of Zeroes in " << n << " is " << countZero(n) << endl;
    system("pause"); //For Debugging, ignore it
    return 0;
}