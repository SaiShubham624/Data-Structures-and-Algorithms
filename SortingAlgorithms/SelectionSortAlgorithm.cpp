#include<iostream>
using namespace std;

/*
Time Complexity = O(N^2)
Space Complexity = O(1)
*/

void selectionSort(int a[], int n){
    for (int i = 0; i <= n-2; i++)
    {
        int smallest = i;
        for (int j = i+1; j <= n-1; j++)
        {
            if(a[j] < a[smallest]){
                smallest = j;
            }
        }
        swap(a[i], a[smallest]);
    }
    
}
int main(){
    int n;
    cout << "Enter the No. of Elements" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i+1 << " element: ";
        cin >> a[i];
        cout << endl;
    }
    selectionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    system("pause"); //For Debugging, ignore it
    return 0;
}
