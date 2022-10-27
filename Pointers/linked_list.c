#include <stdio.h>
#include <cstdlib>
struct Node{
	int value;
	struct Node* next;

};


struct Node* create_node(){
	struct Node* n = (struct Node *)malloc(sizeof(struct Node));
	return n;

}

void insert_at_end(struct Node ** START){
	struct Node* n = create_node();
	printf("\nEnter the Value(END) : ");
	scanf("%d",&n->value);
	n->next = NULL;

	if(*START == NULL){
		*START = n;
	}else{
		struct Node* t = *START;
		while(t->next){
			t = t->next;
		}
		t->next = n;
	}
}

void show(struct Node** START){
	struct Node* t = *START;
	while(t){
		printf("%d --> ",t->value);
		t = t->next;
	}
}
	
int main(){
	struct Node* START1;
	START1 = NULL;
	struct Node* START2;
	START2 = NULL;
	insert_at_end(&START1);
	insert_at_end(&START2);
	insert_at_end(&START1);
	insert_at_end(&START2);
	insert_at_end(&START1);
	insert_at_end(&START2);
	insert_at_end(&START1);
	insert_at_end(&START2);
	if(START1 == NULL){
		printf("YES");
	}
	show(&START1);
	show(&START2);
	
	return 0;
}