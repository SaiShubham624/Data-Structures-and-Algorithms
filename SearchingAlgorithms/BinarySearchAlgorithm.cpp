#include<iostream>
using namespace std;

/*
Binary Search is a algo for searching elements in an array. However, the given array must be
sorted to use binary search. It's takes O(log n) steps, where n is the number of elements

Refer to this link for Explanation:
https://www.programiz.com/dsa/binary-search
*/

bool binarySearch(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == target){
            return true;
        }
        else if(arr[mid] < target){
            s = mid + 1;
        }
        else if(arr[mid] > target){
            e = mid - 1;
        }
    }
    return false;
}

int main(){
    int arr[8] = {34, 56 , 78, 123, 789, 3456, 4567, 9568};

    while(1)
    {
        int toFind = 0;
        cout << "Enter the Element to find: ";
        cin >> toFind;
        if(toFind == -1) break;
        bool isItThere = binarySearch(arr, 8, toFind);
        if(isItThere){
            cout << "Yes It is there!" << endl;
        }
        else{
            cout << "Nope, didn't found it" << endl;
        }
    }
 

    system("pause"); //For Debugging, ignore it
    return 0;
}