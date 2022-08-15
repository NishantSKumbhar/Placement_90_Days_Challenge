#include<stdio.h>

struct node{
    int node_value;
    struct node * node_pointer;
};

struct node *START = NULL;


struct node* create_node(){
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    return t;
}


void insert_at_end(){
    struct node *p;
    p = create_node();
    printf("\nEnter the Value to insert at End :");
    scanf("%d",&p->node_value);
    p->node_pointer=NULL;
    if(START==NULL){
        START = p;
    }else{
        struct node*temp;
        temp = START;
        while(temp->node_pointer){
            temp = temp->node_pointer;
        }
        temp->node_pointer = p;
    }
}

void insert_at_start(){
    struct node *p;
    p = create_node();
    printf("\nEnter the Value to Insert at First ");
    scanf("%d",&p->node_value);
    struct node *temp;
    temp = START;
    p->node_pointer = temp;
    START = p;

}


void insert_after_node(int n){
    struct node*p;
    p = create_node();
    printf("\nEnter the Value to be inserted after %d Node",n);
    scanf("%d",&p->node_value);
    if(START == NULL){
        printf("\nLIST IS EMPTY SO CANT FIND PARTICULAR NODE");
    }else{
        struct node * temp;
        temp = START;
        while(temp->node_value != n){
            temp = temp->node_pointer;
        }
        p->node_pointer = temp->node_pointer;
        temp->node_pointer = p;
    }
}

void display(){
    struct node *d;
    d = START;
    while(d){
        printf("--> %d ",d->node_value);
        d = d->node_pointer;
    }
}

int main(){
    insert_at_end();
    insert_at_end();
    insert_at_end();
    insert_at_end();
    insert_at_end();
    display();
    insert_at_start();
    display();

    insert_after_node(45);
    display();
    return 0;
}
