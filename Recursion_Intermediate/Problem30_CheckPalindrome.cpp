#include<iostream>
using namespace std;

/*
Problem:
    You have to check if the given array is Palindrome or not.
    Palindrome i.e. Original Order of the word/numbers = Reverse Order of the word/numbers
    For Ex->
        121 = 121; it is a palindrome
        123 != 321; it is not a palindrome
*/

bool isPalindrome(int arr[], int e, int s=0){
    if(s>e){
        return true;
    }
    if(arr[s] == arr[e-1]){
        return isPalindrome(arr, s+1, e-1);
    }else 
    {
        return false;
    }
}

int main(){
    int arr[3] = {1, 2, 3};
    cout << isPalindrome(arr, 3) << endl;
    system("pause"); //For Debugging, ignore it
    return 0;
}