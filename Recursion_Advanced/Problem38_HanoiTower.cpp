#include<iostream>
using namespace std;

/*
Refer to this link to understand Tower of Hanoi:
https://en.wikipedia.org/wiki/Tower_of_Hanoi
Problem:
    Create a Hanoi Tower Sovler
*/

// Solution
int towerOfHanoi(int noOfDisks){
    if(noOfDisks == 0){
        return 0;
    }
    return towerOfHanoi(noOfDisks - 1) + 1 + towerOfHanoi(noOfDisks - 1);
}

void printSteps(int noOfDisks, char s, char d, char h){
    if(noOfDisks == 0){
        return;
    }
    printSteps(noOfDisks - 1, s, h, d);
    cout << "Move Disk " << noOfDisks << " from " << s << " to " << d << endl;
    printSteps(noOfDisks - 1, h, d, s);
}

int main(){
    int n;
    cout << "This program solves the Hanoi Tower" << endl;
    cout << "Enter the number of Disks" << endl << "> ";
    cin >> n;
    cout << "The Number of Steps taken to solve this is " << towerOfHanoi(n) << endl;
    cout << "How to Solve this?" << endl;
    printSteps(n, 'A', 'C', 'B');
    return 0;
}