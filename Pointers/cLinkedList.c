#include<stdio.h>
#include <stdlib.h>

/// You need to #include <stdlib.h>. Otherwise it's defined as int malloc() which is incompatible with the built-in type void *malloc(size_t).

struct Node{
    int val;
    struct Node *next;
};

struct Node* createNode(){
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    return n;
};

void insert_at_end(struct Node **START){
    struct Node *n = createNode();
    printf("\nEnter the Number (To be added at the End) : ");
    scanf("%d",&n->val);
    n->next = NULL;

    if(*START == NULL){
        *START = n;
    }else{
        struct Node *t = *START;
        while(t->next != NULL){
            t = t->next;
        }
        t->next = n;
    }
}

void insert_at_begin(struct Node **START){
    struct Node *n = createNode();
    printf("\nEnter the Number (To be added at the Begin) : ");
    scanf("%d",&n->val);
    n->next = NULL;

    struct Node *temp;
    temp = *START;
    *START = n;
    n->next = temp;
}

void insert_at_nth(struct Node **START){
    struct Node *n = createNode();
    int p;
    printf("\nEnter the Position of Number : ");
    scanf("%d",&p);

    printf("\nEnter the Number (To be added at the Position %d) : ",p);
    scanf("%d",&n->val);
    n->next = NULL;
    int c = lengthOfLinkedList(*START);
    //printf("\nLength : %d",c);
    if(*START == NULL && p > 1){
        printf("\n***Linked list is Empty ! Can not Insert !\n");
    }else{
        if(p == 1){
            struct Node *te = *START;
            *START = n;
            n->next = te;
        }else{
                if(p > (c+1)){
                    printf("\nLinked List Size Out of Range, Please input valid Position !");
                    return;
                }
                struct Node *t = *START;
                int i;
                for(i = 1; i < p-1; i++){
                    t= t->next;
                }
                struct Node *temp = t->next;
                t->next = n;
                n->next = temp;
            }
    }

}

void delete_at_nth(struct Node **START){

    int p;
    printf("\nEnter the Position of Number To be Deleted : ");
    scanf("%d",&p);
    int c = lengthOfLinkedList(*START);
    if(p != 1 && c == 0){
        printf("\nLinked List is Empty .");
        return;
    }
    if(p > c){
        printf("\nLinked List Size Out of Range, Please input valid Position !");
        return;
    }else{
        if(p == 1){
            struct Node *t = *START;
            struct Node *temp = t->next;
            *START = temp;
        }else{
            struct Node* t = *START;
            int i;
            for(i = 1; i < p-1; i++){
                t= t->next;
            }

            //struct Node *e2 = t->next->next;
            //t->next = e2;
            struct Node *temp = t->next;
            t->next = temp->next;
            free(temp);
        }
    }



}

int lengthOfLinkedList(struct Node *START){
    struct Node *t = START;
    int c = 0;

    while(t){

        c++;
        t = t->next;
    }
    return c;
}

void displayLinkedlist(struct Node *START){
    struct Node *t = START;
    int c = 0;
    printf("\nLinked List : ");
    while(t){
        printf("----> %d",(*t).val);
        c++;
        t = t->next;
    }
    printf("\nTotal Nodes : %d\n",c);
}

int main(){

    struct Node *START;
    START = NULL;

    struct Node *n1 = createNode();
    (*n1).val = 12;
    (*n1).next = NULL;

    START = n1;

    displayLinkedlist(START);

    insert_at_end(&START);

    displayLinkedlist(START);
    insert_at_end(&START);
    displayLinkedlist(START);
    insert_at_begin(&START);
    displayLinkedlist(START);
    insert_at_nth(&START);
    displayLinkedlist(START);
    delete_at_nth(&START);
    displayLinkedlist(START);
    return 0;
}
