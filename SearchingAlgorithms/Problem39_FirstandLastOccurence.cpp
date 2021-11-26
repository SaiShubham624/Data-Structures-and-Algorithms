#include<iostream>
using namespace std;

/*
Problem:
    Refer to this Link:
        https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
*/

int getFirstOccurence(int arr[], int s, int e, int x){
    int result = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == x){
            result = mid;
            e = mid - 1;
        }
        else if(arr[mid] < x){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }    
    return result;
}
int getLastOccurence(int arr[], int s, int e, int x){
    int result = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == x){
            result = mid;
            s = mid + 1;
        }
        else if(arr[mid] > x){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }    
    return result;
}

int main(){
    // Example Array
    int arr[9] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    // The Element to Work on
    int x = 5;
    int firstIndex = getFirstOccurence(arr, 0, 8, x);
    int lastIndex = getLastOccurence(arr, 0, 8, x);
    cout << "The Result is (" << firstIndex << ", " << lastIndex << ") "<< endl;
    return 0;
}