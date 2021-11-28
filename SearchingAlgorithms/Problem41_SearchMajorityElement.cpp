#include<iostream>
#include<vector>
#include<time.h>
using namespace std;
/*
Problem:
    Refer to this Link:
        https://leetcode.com/problems/majority-element/
*/

int mooreVotingMajorityElement(vector<int> arr){
    int end = arr.size();
    int candidate = arr[0], count = 1;
    for (int i = 1; i < end; i++)
    {
        if (arr[i] == candidate){
            count++;
        }
        else{
            count--;
            if(count == 0){
                candidate = arr[i];
                count = 1;
            }
        }
    }
    return candidate;
}

/*
Another Approach:
1. Sort the Array
2. Since Majority Element is greater than n/2, where n is the size, then the mid element of the array
    will be the majority element
*/

int main(){
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(2);
    int result = mooreVotingMajorityElement(v1);
    cout << result << endl;
    return 0;
}