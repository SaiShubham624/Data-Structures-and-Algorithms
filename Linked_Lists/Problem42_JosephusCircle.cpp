#include<iostream>
using namespace std;
// Find the last position after deleting every m element in a list of n size


// The Linked List
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
        Node(int data, Node &N){
            this->data = data;
            this->next = NULL;
            N.next = this;
        }
};

// To Push Values in a Linked List
Node* pushCircle(Node* head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        head->next = newNode;
        return head;
    }
    Node* tmp = head;
    do{
        tmp = tmp->next;
    }while(tmp->next != head);
    tmp->next = newNode;
    newNode->next = head;
    return head;
}

// To Copy a Linked List
Node* copyLL(Node* head){
    Node* tmp = head;
    Node* theCopiedLL = NULL;
    do{
        theCopiedLL = pushCircle(theCopiedLL, tmp->data);
        tmp = tmp->next;
    }while(tmp != head);
    return theCopiedLL;
}

// The Solution
Node* JosephusCircle(Node* head, int m){
    // First Copy the Linked List
    Node* CopiedOne = copyLL(head);
    // Have the slow point to head and fast to the next of slow
    Node* slow = CopiedOne;
    Node* fast = CopiedOne->next;
    // Apply the Logic of Josephus Circle
    int count = 2;
    while(fast != slow){
        if(count == m){
            Node* toDelete = fast;
            fast = toDelete->next;
            slow->next = fast;
            toDelete->next = NULL;
            delete toDelete;
            count = 1;
        }
        fast = fast->next;
        slow = slow->next;
        count++;
    }
    // Return the Last Main Standing
    return slow;
}
