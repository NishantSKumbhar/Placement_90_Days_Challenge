#include<stdio.h>
#include<stdlib.h>
struct node{
	int value;
	struct node *next;

};

struct node * START  = NULL;

struct node * create_node(){
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	return temp;
}


void insert_at_end(){
	struct node * t;
	t = create_node();
	printf("\nEnter the Value : ");
	scanf("%d",&t->value);
	t->next = NULL;
	if(START == NULL){
		START = t;
	}else{
		struct node *trav;
		trav = START;
		while(trav->next != NULL){
			trav = trav->next;
		}
		trav->next = t;
	}
}


void display_linked_list(){
	struct node *trav;
	if(START == NULL){
		printf("Linked List is Empty !");
	}else{
		trav = START;
		while(trav != NULL){
			printf("--> %d -",trav->value);
			trav = trav->next;
		}
	}
}

int main(){
	printf("|| Linked List ||\n");
	display_linked_list();
	insert_at_end();
	display_linked_list();
	insert_at_end();
	insert_at_end();
	insert_at_end();
	insert_at_end();
	display_linked_list();
	return 0;
}
