#include<iostream>
using namespace std;

/*
Problem:
    You have to remove consecutive duplicates from the array arr[] using recursion.
*/

void removeConsecutiveDuplicates(char arr[]){
    if(arr[0] == '\0'){
        return;
    }
    if(arr[0] == arr[1]){
        for (int i = 0; arr[i] != '\0'; i++)
        {
            arr[i] = arr[i+1];
        }
        removeConsecutiveDuplicates(arr);        
    }else{
        removeConsecutiveDuplicates(arr+1);
    }
}

int main(){
    char array[] = "aabcccddefff";
    removeConsecutiveDuplicates(array);
    cout << array << endl;
    system("pause"); //For Debugging, ignore it
    return 0;
}