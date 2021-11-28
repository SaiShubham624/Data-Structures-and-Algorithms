#include<iostream>
using namespace std;

/*
Trivia:
    1. Linked Lists is a data structure
    2. Linked List MO is random allocation of memory
    3. The First Node/Element in the Linked List is called the head
    4. The Last Node/Element in the Linked List is called the tail
    5. One Node/Element contains the data and address of the next element
*/

class Node{
    private:
        // Returns the Address of the Object
        Node* address(){
            return this;
        }
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            next = NULL;
        }
        Node(int data, Node N){
            this->data = data;
            N.next = this->address();
        }
};

int main(){
    Node n1(10); // The Head of the List
    Node* head = &n1; // Creating the said head
    Node n2(12, n1); 

    // Printing the Content of the List
    cout << n1.data << " " << endl;
    cout << n2.data << " " << endl;
    return 0;
}