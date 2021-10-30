#include<iostream>
#include<vector>
using namespace std;

/*
Trivia:
    1. Vectors are in-built dynamic arrays in C++
    2. You don't need to give a size when creating a vector
    3. It is found in the vector header file
    4. It is implemented by using a template
    5. It follows the LIFO(Last In, First Out) logic
    6. Vector Methods:
        push_back -> appends the element in the vector
        pop_back -> removes the last element in the vector
        at -> gives a reference of the given index
        size -> returns the used size of vector
        capacity -> returns the no. of elements the vector can hold
    7. You can use [] brackets only to access the elements, not to modify them
    8. There is a optional constructor through which you cab before hand reserver for 
        certain number of elements, Like this,
            vector<int> v1(12);
*/

int main(){
    // Creating a Vector of integers
    vector<int> v1;

    // Appending elements in it
    v1.push_back(10);
    v1.push_back(12);
    v1.push_back(145);
    v1.push_back(33);

    cout << "Before removing the element" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl; // Accessing the Elements using [] brackets
    }

    v1.pop_back(); // Removing the last element

    // Displaying the Modified Vector
    cout << "After removing the element" << endl;
    for (register int i = 0; i < v1.size(); i   ++)
    {
        cout << v1.at(i) << endl;
    }
    


    system("pause"); //For Debugging, ignore it
    return 0;
}