#include<iostream>
using namespace std;

/*
The Bubble sort will take n * n times to sort an array where n is the number of 
elements in the array. For Ex -> arr[3] will take 3 x 3 = 9 steps.
But, the above condition will also apply when given an sorted array too.
Aim:
    We have to implement the bubble sort as such that it will take n steps to sort
    an array where the array is already sorted.
    n = no. of elements in a array
*/



void bubbleSort(int a[], int n){
    for (int count = 1; count <= n-1; count++)
    {
        bool isSwapped = false;
        for (int j = 0; j <= n-2; j++)
        {
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                isSwapped = true;
            }
        }
        if(isSwapped == false){
            break;
        }     
    }   
}

int main(){
    int n;
    cout << "Enter the number of Elements: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i+1 << " Element: ";
        cin >> a[i];
    }
    bubbleSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }   
    cout << endl;
    system("pause"); //For Debugging, ignore it
    return 0;
}