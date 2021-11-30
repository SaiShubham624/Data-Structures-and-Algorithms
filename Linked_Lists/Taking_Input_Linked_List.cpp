#include<iostream>
using namespace std;
/*
Creating a Linked List using a Function 
*/
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

Node* takeInput(){
    int data;
    Node* head = NULL;
    Node* tail = NULL;
    do{
        cin >> data;
        Node* n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        }else{
            tail->next = n;
            tail = n;
        }
    }while(data != -1);
    return head;
}

int main(){
    Node* nums = takeInput();
    print(nums);
    return 0;
}