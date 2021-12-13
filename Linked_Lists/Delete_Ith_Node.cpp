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

Node* deleteAt(Node* head, int i){
    if(i<0){
        cout << "Negatives Not Allowed" << endl;
    }
    if(i == 0 && head){
        Node* newHead = head->next;
        head->next = NULL;
        delete head;
        return newHead;
    }
    int count = 0;
    Node* curr = head;
    while(count < i-1 && curr != NULL){
        curr = curr->next;
        count++;
    }

    if(curr && curr->next){
        Node* temp = curr->next;
        curr->next = temp->next;
        temp->next = NULL;
        delete temp;
        return head;
    }
    return head;
}

int main(){
    Node n1(1);
    Node* head = &n1;
    // The Rest of the Nodes
    Node n2(2, n1);
    Node n3(3, n2);
    Node n4(4, n3);
    Node n5(5, n4);
    deleteAt(head, 0);
    print(head);
    return 0;
}