#include<iostream>

using namespace std;

struct Node{

    int val;
    Node *next;
    Node(){
        val = 0;
        next = NULL;
    }
    Node(int x){
        val = x;
        next = NULL;
    }
};


void displayLinkedlist(Node *p){
    Node *t = p;
    while(t){
        cout << "----> " << (*t).val;
        t = t->next;
    }
}

int main(){

    Node* START = new Node();

    Node *n1 = new Node(2);
    START = n1;
    displayLinkedlist(START);



    return 0;

}
