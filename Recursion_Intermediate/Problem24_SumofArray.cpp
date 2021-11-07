#include<iostream>
using namespace std;

int sumOfArray(int arr[], int n){
    if(n == -1) return 0;
    return arr[n] + sumOfArray(arr, n-1);
}

int sumOfArray2(int arr[], int n){
    if(n==0) return 0;
    return arr[0] + sumOfArray(arr+1, n-1);
}

int main(){
    cout << "This programs tell the sum of the number you want to enter" << endl;
    int n;
    cout << "Enter how many numbers you want to enter: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i+1 << " element: ";
        cin >> arr[i];
    }
    cout << "The Sum is " << sumOfArray(arr, n) << endl;    
    system("pause"); //For Debugging, ignore it
    return 0;
}