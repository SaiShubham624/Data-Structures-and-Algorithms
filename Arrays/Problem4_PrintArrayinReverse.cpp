#include<iostream>
using namespace std;

/*
Problem: Print the given array in reverse order
*/

int main(){
    int arr[4] = {1, 2, 3, 4};
    // Solution
    cout << "Original Order" << endl;
    for (int i=0; i<4;i++){
        cout << arr[i] << endl; 
    }
    cout << "Reverse Order" << endl;
    for (int i=3; i>=0;i--){
        cout << arr[i] << endl;
    }
    return 0;
}
