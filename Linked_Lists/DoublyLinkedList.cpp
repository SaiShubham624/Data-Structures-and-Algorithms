#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        
        Node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
};
void print(Node* head, bool reverse){
    if(reverse){
        for(Node* tmp = head; tmp != NULL; tmp = tmp->prev){
            cout << tmp->data << endl;
        }
    }else{
        for(Node* tmp = head; tmp != NULL; tmp = tmp->next){
            cout << tmp->data << endl;
        }      
    }
}
int main(){
    Node n1(1);
    Node n2(3);
    Node n3(2);
    
    n1.next = &n2;

    n2.next = &n3;
    n2.prev = &n1;

    n3.prev = &n2;

    Node* head = &n1;
    Node* tail = &n3;
    cout << "Original Order" << endl;
    print(head, false);
    cout << "Reverse Order" << endl;
    print(tail, true);
    return 0;
}