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

Node* midPoint(Node* head){
    int count1 = 0, count2 = 0;
    for(Node* tmp = head; tmp != NULL; tmp = tmp->next){
        count1++;
    }
    while(count2 < count1/2){
        head = head->next;
        count2++;
    }
    return head;
}

Node* midP(Node* head){
    // Fast and Slow Pointer Approach
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){
    Node n1(14);
    Node* head = &n1;
    Node n2(2, n1);
    Node n3(3, n2);
    Node n4(4, n3);
    Node n5(5, n4);
    Node* result = midP(head);
    cout << result->data << endl;
    return 0;
}