#include <stdio.h>
#include <stdlib.h>
struct node{
	int value;
	struct node *prev, *next;
};

struct node * START = NULL;

struct node * create_node(){

	struct node * n;
	n = (struct node *)malloc(sizeof(struct node));
	return n;
}

void insert_at_first(){
    struct node * e;
    e = create_node();
    printf("\nEnter the Value to insert at the End : ");
    scanf("%d",&e->value);
    e->prev = NULL;
    e->next = NULL;
    if(START == NULL){
        START = e;
    }else{
        START->prev = e;
        e->next = START;
        START = e;
    }
}

void insert_at_end(){
	struct node *e;
	e = create_node();
	printf("\nEnter the Value to insert at the End : ");
	scanf("%d",&e->value);
	e->prev = NULL;
	e->next = NULL;

	if(START == NULL){
		START = e;
	}else{
		struct node *temp;
		temp = START;
		while(temp->next){
			temp = temp->next;
		}
		temp->next = e;
		e->prev = temp;

	}

}


void delete_first_node(){
    if(START == NULL){
        printf("\nLIST IS EMPTY !");
    }else{
        struct node *temp;
        temp = START;
        START = START->next;
        START->prev = NULL;
        free(temp);
    }


}

void display(){
	if(START == NULL){
		printf("\nLIST IS EMPTY");
	}else{
		struct node * t;
		t = START;
		while(t){
			printf(":--: %d",t->value);
			t = t->next;
		}
	}
}

int main(){
	insert_at_end();
	insert_at_end();
	insert_at_end();
	insert_at_end();
	insert_at_end();
	insert_at_end();

	display();

	insert_at_first();
	insert_at_first();
	insert_at_first();
	insert_at_first();

	display();
    printf("\nDeleting the First Node : ");
    delete_first_node();

    display();
	return 0;
}
