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

struct Node* addTwoNumbers(struct Node* l1, struct Node* l2){
    int a1 = 0, a2 = 0;
    struct Node *ll1 = l1;
    struct Node *new = createnode();
    int i = 0;
    while(ll1){
        a1 += ll1->val * (10 * i);
        i++;
    }
    struct Node *ll2 = l2;
    int j = 0;
    while(ll2){
        a2 += ll2->val * (10 * j);
        j++;
    }

    int ans = a1 + a2;
    int flag = 0;
    int c = 0;
    int f = 0;
    int dans = ans;
    while(ans){
        f = ans % 10;
        struct Node * j = createnode();
        j->val = f;
        j->next = NULL;
        if(START == NULL){
            START = j;   
        }else{
            struct Node *trav;
            trav = START;
            while(trav->next){
                trav = trav->next;
            }
            trav->next = j;
        }
       
        ans /= 10;

    }

    return START;
    
    
}
int main(){

	printf("\n\t\t----> LINKED ----> LIST ---->");

	// insert_at_end();
	
	// insert_at_end();
	
	// insert_at_end();
	// insert_at_end();
	// showLinkedList();
	// insert_at_first();
	
	// insert_at_end();
	// showLinkedList();
	// insert_at_end();
	// showLinkedList();	
	// insert_at_first();
	// showLinkedList();
	// int a;
	// printf("\nEnter the Value after which you want to insert :");
	// scanf("%d",&a);
	// insert_after_this(a);
	// showLinkedList();
	// delete_first_node();
	// printf("\nAfter Deleting the First Node\n");
	// showLinkedList();
	// insert_at_first();
	// delete_last_node();
	// printf("\nAfter Deleting the Last Node\n");
	// showLinkedList();

	
	return 0;
}