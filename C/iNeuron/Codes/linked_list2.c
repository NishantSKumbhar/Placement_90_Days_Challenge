#include<stdio.h>

struct node{
    int value;
    struct node *p;
};

struct node *START=NULL;

struct node * create_node(){
    struct node *q;
    q = (struct node *)malloc(sizeof(struct node));
    return q;
}


void insert_at_end(){

    struct node *temp;
    temp = create_node();
    printf("Enter the Value : ");
    scanf("%d",&temp->value);
    temp->p = NULL;
    if(START == NULL){
        START = temp;
    }else{
        struct node *t;
        t = START;
        while(t->p != NULL){
            t = t->p;
        }
        t->p = temp;
    }

}


void display_l(){
    struct node * d;
    if(START == NULL){
        printf("\nList is Empty");
    }else{
        d = START;
        while(d != NULL){
            printf("--%d",d->value);
            d = d->p;
        }
    }
}

int main(){

    insert_at_end();
    insert_at_end();
    insert_at_end();
    insert_at_end();
    display_l();
    return 0;
}
