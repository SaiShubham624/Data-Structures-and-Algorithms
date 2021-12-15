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

Node* deleteEnd(Node* head, int k){
    Node* one = head;
        Node* two = head;
        
        while(k--){ /// k times
            two = two->next;
        }
        if(two==NULL){   /// length of ll = k  => delete head node
            return one->next;
        }
        while(two->next!=NULL){
            one = one->next;
            two = two->next;
        }
        
        /// delete kth node from end
        one->next = one->next->next;      /// memory leak
        
        return head;
}

int main(){
    Node n1(14);
    Node* head = &n1;
    Node n2(2, n1);
    Node n3(3, n2);
    Node n4(4, n3);
    Node n5(5, n4);
    head = deleteEnd(head, 2);
    print(head);
    return 0;
}