#include<iostream>
using namespace std;

class Node{
        
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
        Node(int data, Node &N)
        {
            this->data = data;
            this->next = NULL;
            N.next = this;
        }
};

void print(Node* h){
    for (Node* tmp = h; tmp != NULL; tmp = tmp->next){
        cout << tmp->data << endl;
    }
}

int main(){
    // The First Node as well as the head
    Node n1(1);
    Node* head = &n1;
    // The Rest of the Nodes
    Node n2(2, n1);
    Node n3(3, n2);
    Node n4(4, n3);
    Node n5(5, n4); // The Tail

    // Printing the List
    print(head);
    return 0;
}