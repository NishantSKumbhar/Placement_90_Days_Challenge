#include<bits/stdc++.h>

using namespace std;


struct Node{

    int val;
    Node * left;
    Node * right;

    Node(int v){
        val = v;
        left = right = NULL;
    }


};


void inorder(Node *r){
    if(r){
        inorder(r->left);
        cout<<r->val<<"  ";
        inorder(r->right);
    }
}

void preorder(Node *r){
    if(r){
        cout<<r->val<<"  ";
        inorder(r->left);
        inorder(r->right);
    }
}
void postorder(Node *r){
    if(r){
        inorder(r->left);
        inorder(r->right);
        cout<<r->val<<"  ";
    }
}
int g = 0;
int height(Node *r){
    if(r){
        g++;
        height(r->left);
    }
    return g;
}
int main(){
    Node *root = new Node(5);
    root->left = new Node(10);
    root->right = new Node(34);
    root->left->left = new Node(3);
    root->left->right = new Node(23);
    root->right->left = new Node(343);
    root->right->right = new Node(100);
    root->left->left->left = new Node(1000);
    /*
                        5
                 |------|--------|   
                10              34
            |----|---|      |----|---|
            3       23      343     100
    */

    cout<<"Inorder Traversal:"<<endl;
    inorder(root);
    cout<<"\nPreorder Traversal:"<<endl;
    preorder(root);
    cout<<"\nPostorder Traversal:"<<endl;
    postorder(root);

    cout<<"\nHeight :"<<height(root)<<endl;
    
    

    return 0;
}