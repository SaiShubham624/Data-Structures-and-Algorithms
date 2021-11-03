#include<iostream>
using namespace std;

/*
A Searching algorithm is algorithm which search for a certain key/value in the given array
Linear Searching is one of them. It's no. of steps i.e. Time Complexity is O(N)
*/

bool linearSearch(int arr[],int length, int target){
    for (int i = 0; i < length; i++)
    {
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[6] = {34, 45, 52, 67, 78, 98};
    
    while(1)
    {
        int toFind = 0;
        cout << "Enter the Element to find: ";
        cin >> toFind;
        if(toFind == -1) break;
        bool isItThere = linearSearch(arr, 6, toFind);
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