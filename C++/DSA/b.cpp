#include<bits/stdc++.h>

using namespace std;

struct node{
    int key;
    node *left;
    node *right;

    node(int k){
        key = k;
        left = right = NULL;
    }

};

void inorder(node *r){
    if(r){
        inorder(r->left);
        cout<<r->key<<"  ";
        inorder(r->right);
    }
}
void preorder(node *r){
    if(r){
        cout<<r->key<<"  ";
        preorder(r->left);
        preorder(r->right);
    }
}

void postorder(node *r){
    if(r){
        postorder(r->left);
        postorder(r->right);
        cout<<r->key<<"  ";
    }
}

int height(node *r){
    if(r == NULL){
        return 0;
    }

    return (max(height(r->left), height(r->right)))+1;
}

void at_k_distance(node *r){

}
int main(){

    cout<<"Binary Search Tree"<<endl;
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->right = new node(60);
    cout<<"Inorder : "<<endl;
    inorder(root);
    cout<<"\nPreorder : "<<endl;
    preorder(root);
    cout<<"\nPostorder : "<<endl;
    postorder(root);
    cout<<"\nHeight : ";
    int h = height(root);
    cout<<h<<endl;
    return 0;
}
