#include<iostream>
#include<vector>
using namespace std;

/*
Problem:
    Refer to this Link:
        https://leetcode.com/problems/search-in-rotated-sorted-array
*/

int searchRotatedArray(vector<int> arr, int key){
    int s = 0;
    int e = arr.size() - 1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] >= arr[s]){
            if(key >= arr[s] && key <= arr[mid]){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        else{
            if(key <= arr[e] && key >= arr[mid]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> v1;
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    int result = searchRotatedArray(v1, 2);
    cout << "The Index is " << result << endl;
    return 0;
}