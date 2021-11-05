#include<iostream>

using namespace std;

int sumOfDigits(int n){
    if(n == 0){
        return 0;
    }
    int recursive_case = sumOfDigits(n/10);

    int last_digit = n%10;
    cout << "Hey How's it Going" << endl;
    return recursive_case + last_digit;
}

int main(){

    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = sumOfDigits(n);
    cout << "The Sum of the digits of " << n << " is " << ans << endl;

    system("pause"); //For Debugging, ignore it
    return 0;
}
