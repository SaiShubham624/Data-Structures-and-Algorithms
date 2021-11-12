#include<iostream>
using namespace std;

/*
Problem: You have to remove elementToRemove from the array arr[] using recursion.
*/

// Solution
void removeCharacter(char arr[], char elementToRemove){
    if(arr[0] == '\0'){
        return;
    }
    if(arr[0] != elementToRemove){            
        removeCharacter(arr+1, elementToRemove);
    }else{
        for (int i = 0; arr[i] != '\0'; i++)
        {
            arr[i] = arr[i+1];
        }
        removeCharacter(arr, elementToRemove);    
    }
}

int main(){
    cout << "This Program removes a certain character from a word" << endl;
    char array[15];
    cout << "Enter the word" << endl << "> ";
    cin >> array;
    char _char;
    cout << "Enter the Character to remove" << endl << "> ";
    cin >> _char;
    removeCharacter(array, _char);
    cout << array << endl;
    system("pause"); //For Debugging, ignore it
    return 0;
}