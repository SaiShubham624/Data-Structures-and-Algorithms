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

bool searchInLL(Node* head, int x){
    if(head == NULL){
        return false;
    }
    bool recursiveCase = searchInLL(head->next, x);
    if(head->data == x){
        return true;
    }
    return recursiveCase;
}

int main(){
    Node n1(4);
    Node* head = &n1;
    Node n2(2, n1);
    Node n3(3, n2);
    Node n4(4, n3);
    if(searchInLL(head, 14)){
        cout << "Yes" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}