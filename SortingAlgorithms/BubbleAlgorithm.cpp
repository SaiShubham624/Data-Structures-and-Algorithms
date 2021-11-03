#include<iostream>
using namespace std;

/*
Refer to this Link for Explanation:
https://www.softwaretestinghelp.com/bubble-sort/
*/

void bubbleSort(int a[], int n){
    for (int count = 1; count <= n-1; count++)
    {
        for (int j = 0; j <= n-2; j++)
        {
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
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