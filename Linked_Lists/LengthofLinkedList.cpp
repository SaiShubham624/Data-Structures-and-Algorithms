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

int length(Node* head){
    int len = 0;
    while(head != NULL){
        len += 1;
        head = head->next;
    }
    return len;
}

int main(){
    Node n1(1);
    Node* head = &n1;
    Node n2(2, n1);
    Node n3(3, n2);
    Node n4(4, n3);
    cout << "The length of the Linked List is " << length(head) << endl;
    return 0;
}
