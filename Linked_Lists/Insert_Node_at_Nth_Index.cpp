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
void insert(Node* head, int x, int n){
    if(n < 0){
        cout << "Negatives not Allowed" << endl;
        return;
    }
    Node* newNode = new Node(x);
    int count = 0;
    while(count < n-1 && head != NULL){
        head = head->next;
        count += 1;
    }
    if(head != NULL){
        newNode->next = head->next;
        head->next = newNode;
    }
    else{
        cout << "Out Of Range" << endl;
    }
}
int main(){
    Node n1(1);
    Node* head = &n1;
    // The Rest of the Nodes
    Node n2(2, n1);
    Node n3(3, n2);
    Node n4(4, n3);
    Node n5(5, n4);
    insert(head, 12, -2);
    print(head);
    return 0;
}