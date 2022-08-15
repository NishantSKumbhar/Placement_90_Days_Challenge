#include<stdio.h>

struct node{
    int info;
    struct node* p;

};

struct node *START = NULL;


struct node* create_node(){
    struct node *n;

    n= (struct node *)malloc(sizeof(struct node));
    return n;

}


void inser_at_end(){

    struct node *temp;
    temp = create_node();
    printf("\nEnter the Number to insert in node :");
    scanf("%d",&temp->info);
    temp->p = NULL;
    if(START == NULL){
        START = temp;
    }else{
        struct node *t;
        t = START;
        while(t->p){

            t = t->p;
        }

        t->p = temp;
    }
}


int main(){


    return 0;
}
