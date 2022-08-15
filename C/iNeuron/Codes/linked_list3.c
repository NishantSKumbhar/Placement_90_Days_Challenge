#include<stdio.h>
#include<conio.h>
struct node{
    int value;
    struct node *p;
};

struct node *START = NULL;

struct node * create_node(){
    struct node *p1;
    p1 = (struct node *)malloc(sizeof(struct node));
    return p1;
}


void insert_at_the_end(){

    struct node *temp;
    temp = create_node();
    printf("\nEnter the Number to insert in Node : ");
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


void display(){
    if(START == NULL){
        printf("\nList is Empty !");
    }else{
        struct node *dp;
        dp = START;
        while(dp != NULL){
            printf("-->%d ",dp->value);
            dp = dp->p;
        }
    }
}


void delete_first_node(){
    if(START == NULL){
        printf("\nLIST is Empty !");
    }else{
        struct node *p2;
        p2 = START;
        START = START->p;
        free(p2);
    }
}

void insert_node_afetr_node(int prev_node){
    struct node *t;
    t = create_node();
    printf("\nEnter the Value in New Node : ");
    scanf("%d",&t->value);

    struct node *trav;

    if(START == NULL){
        printf("LIST is EMPTY");
    }else{
        trav = START;
        while(trav->value != prev_node){
            trav = trav->p;
        }
        struct node *temp;
        temp = trav->p;
        trav->p = t;
        t->p = temp;
    }

}

int main(){
    delete_first_node();
    insert_at_the_end();
    insert_at_the_end();
    insert_at_the_end();
    insert_at_the_end();
    insert_at_the_end();
    //clrscr();
    //system("cls");
    display();
    printf("\n Now Deleting First Node.\n");
    delete_first_node();
    display();
    insert_node_afetr_node(20);
    display();
    getch();
    return 0;
}
