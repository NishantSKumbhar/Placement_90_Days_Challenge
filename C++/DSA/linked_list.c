#include<stdio.h>
#include<stdlib.h>

struct Node{
	int val;
	struct Node *next;
};


struct Node * START = NULL;

struct Node* create_node(){
	struct Node *a;
	a = (struct Node *)malloc(sizeof(struct Node));
	return a;
}

void insert_at_end(){
	struct Node *n = create_node();
	printf("\nEnter the Value to be inserted at End :");
	scanf("%d",&n->val);
	n->next = NULL;

	if(START == NULL){
		START = n;
	}else{
		struct Node* t;
		t = START;
		while(t->next != NULL){
			t = t->next;
		}
		t->next = n;
	}
}


void insert_at_first(){
	struct Node *n = create_node();
	printf("\nEnter the Value to be inserted at First :");
	scanf("%d",&n->val);
	n->next = NULL;

	if(START == NULL){
		START = n;
	}else{
		struct Node* t;
		t = START;
		START = n;
		n->next = t;
		
	}
}

void insert_after_this(int num){
	struct Node *n = create_node();
	printf("\nEnter the Value to be inserted after %d :",num);
	scanf("%d",&n->val);
	n->next = NULL;

	if(START == NULL){
		printf("\nLinked List is Empty, so can't add !");
	}else{
		struct Node* t;
		t = START;
		while(t->val != num){
			t = t->next;
		}
		struct Node* temp;
		temp = t->next;
		t->next = n;
		n->next = temp;
		
		
	}
}


void delete_first_node(){
	if(START == NULL){
		printf("\nLinked List is Empty .");
	}else{
		START = START->next;
	}
}


void delete_last_node(){
	if(START == NULL){
		printf("\nLinked List is Empty .");
	}else{
		struct Node * t;
		t = START;
		while(t->next->next){
			t = t->next;
		}
		t->next = NULL;
	}
}
void showLinkedList(){
	struct Node* t;
	t = START;
	while(t){
		printf(" ---> %d ",t->val);
		t = t->next;
	}
}
int main(){

	printf("\n\t\t----> LINKED ----> LIST ---->");

	// insert_at_end();
	
	// insert_at_end();
	
	// insert_at_end();
	// insert_at_end();
	// showLinkedList();
	// insert_at_first();
	
	insert_at_end();
	showLinkedList();
	insert_at_end();
	showLinkedList();	
	insert_at_first();
	showLinkedList();
	int a;
	printf("\nEnter the Value after which you want to insert :");
	scanf("%d",&a);
	insert_after_this(a);
	showLinkedList();
	delete_first_node();
	printf("\nAfter Deleting the First Node\n");
	showLinkedList();
	insert_at_first();
	delete_last_node();
	printf("\nAfter Deleting the Last Node\n");
	showLinkedList();
	return 0;
}