#include<iostream>

using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key = k;
        left = right = NULL;
    }

};

void inorder(Node *r){
    if(r){
        inorder(r->left);
        cout<<r->key<<"  ";
        inorder(r->right);
    }
}

void preorder(Node *r){
    if(r){
        cout<<r->key<<"  ";
        preorder(r->left);
        preorder(r->right);
    }
}

void postorder(Node *r){
    if(r){
        postorder(r->left);
        postorder(r->right);
        cout<<r->key<<"  ";
    }
}

int height(Node *r){
    if(r == NULL){
        return 0;
    }

    return max(height(r->left), height(r->right))+1;
}
int main(){
    /*struct Node n1(5);
    cout<<n1.key;
    cout<<n1.left;
    cout<<n1.right;*/

    /// below is empty tree
    //Node *root = NULL;

    /// binary tree initialized.
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);

    cout<<"Inorder Traversal:"<<endl;
    inorder(root);
    cout<<"\nPreorder Traversal:"<<endl;
    preorder(root);
    cout<<"\nPostorder Traversal:"<<endl;
    postorder(root);

    int h = height(root);
    cout<<"\nHeight of Tree : "<<h<<endl;
    return 0;
}
