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

void printIndex(int index, Node* head){
    int count = 0;
    if(index < 0){
        cout << "Negative Index not Allowed" << endl;
        return;
    }
    for(Node* tmp = head; tmp != NULL; tmp = tmp->next){
        if(count == index){
            cout << tmp->data << endl;
            return;
        }
        count += 1;
    }
    cout << "Out of Range" << endl;
}

int main(){
    Node n1(1);
    Node* head = &n1;
    Node n2(21, n1);
    Node n3(45, n2);
    printIndex(-2, head);
    return 0;
}