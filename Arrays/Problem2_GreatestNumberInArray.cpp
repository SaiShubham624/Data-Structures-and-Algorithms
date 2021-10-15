#include<iostream>
using namespace std;

/*
Problem: You have to find the greatest digit in the elements of an array
*/

int main(){
    int a[10] = {10, 2, 4, 6, 1, 3};
    int largest = INT_MIN;
    for(int i=0; i<10; i++){
        if(largest < a[i]){
            largest = a[i];
        }
    }
    cout << largest << endl;
    return 0;
}
