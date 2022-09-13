#include<stdio.h>

struct node{
    int value;
    struct node* next;
};

struct node * START = NULL;


struct node* create_node(){
    struct node *c;
    c = (struct node *)malloc(sizeof(struct node));
    return c;
}

void insert_at_end(){
    struct node *p;
    p = create_node();
    printf("\nEnter the Value to insert at the end : ");
    scanf("%d",&p->value);
    p->next = NULL;
    if(START == NULL){
        START = p;
    }else{
        struct node *trav;
        trav = START;
        while(trav->next){
            trav = trav->next;
        }
        trav->next = p;
    }

}

void insert_at_first(){
    struct node *p;
    p = create_node();
    printf("\nEnter the Value to insert at the  First : ");
    scanf("%d",&p->value);
    if(START == NULL){
        START = p;
        p->next = NULL;
    }else{
        struct node *temp;
        temp = START;
        START = p;
        p->next = temp;
    }

}
void display_list(){
    struct node *trav;
    trav = START;
    while(trav){
        printf(" --> %d",trav->value);
        trav = trav->next;
    }
}

int main(){

    insert_at_end();
    insert_at_end();
    insert_at_first();
    insert_at_end();
    insert_at_end();
    insert_at_end();
    insert_at_first();
    insert_at_end();
    insert_at_end();
    display_list();
    insert_at_first();
    insert_at_first();
    display_list();
    return 0;
}
