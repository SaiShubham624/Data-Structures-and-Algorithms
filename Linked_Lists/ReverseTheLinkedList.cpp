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
        cout << tmp->data << " ";
    }
}

Node* reverseLL(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL){
        Node* n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    return prev;
}


Node* takeInput(string displayText){
    int data;
    Node* head = NULL;
    Node* tail = NULL;
    cout << displayText << endl;
    cin >> data;
    while(data != -1){        
        Node* n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        }else{
            tail->next = n;
            tail = n;
        }
        cin >> data;
    }
    return head;
}

int main(){
    Node* head = takeInput("Enter the Values:");
    cout << "Reversed Of the Above Data" << endl;
    Node* reverseLLList = reverseLL(head);
    print(reverseLLList);
    return 0;
}