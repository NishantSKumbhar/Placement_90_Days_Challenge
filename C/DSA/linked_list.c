#include<stdio.h>

struct node{
    int value;
    struct node * next;
};

struct node *START = NULL;

struct node * create_node(){
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}

void insert_at_end(){

    struct node *t;
    t = create_node();
    printf("\nEnter the Value to insert at End : ");
    scanf("%d",&t->value);
    t->next = NULL;
    if(START == NULL){
        START = t;
    }else{
        struct node *trav;
        trav = START;
        while(trav->next){
            trav = trav->next;
        }
        trav->next = t;
    }
}


void insert_at_first(){
    struct node *t;
    t = create_node();
    printf("\nEnter the Value to insert at First : ");
    scanf("%d",&t->value);
    if(START == NULL){
        START = t;
        t->next = NULL;
    }else{
        struct node *temp;
        temp = START;
        START = t;
        t->next = temp;
    }

}


void insert_after_particular(){
    int n;
    printf("\nElement After You Want to Insert : ");
    scanf("%d",&n);
    if(START == NULL){
        printf("\nLIST IS EMPTY , %d ELEMENT NOT EXIST.",n);
        getch();
    }else{
        struct node *t;
        t = create_node();
        printf("\nEnter the Value to insert After %d : ",n);
        scanf("%d",&t->value);
        struct node* trav;
        trav = START;
        while(trav->value != n){
            trav = trav->next;
        }
        struct node* temp;
        temp = trav->next;
        trav->next = t;
        t->next = temp;
    }

}



void delete_first_node(){
    if(START == NULL){
        printf("\nLIST IS ALREADY EMPTY");
        getch();
    }else{
        START = START->next;
    }
}

void display_linked_list(){
    struct node  *trav;
    trav = START;
    while(trav){
        printf("---> %d",trav->value);
        trav = trav->next;
    }

}


char menu(){
    printf("|| ----------------- Linked List ----------------- ||\n");
    char move;
    printf("SELECT THE CORRECT KEY TO PERFORM OPERATIONS : \n");
    printf("\t>>> To Insert Element at the End : Enter 'E' or 'e'\n");
    printf("\t>>> To Insert Element at the First : Enter 'F' or 'f'\n");
    printf("\t>>> To Insert Element After Particular Element : Enter 'p' or 'P'\n");
    printf("\t>>> To Delete First Element : Enter 'd' or 'D'\n");
    //printf("\t>>>To Insert Element at the End : Enter 'D' or 'd'\n");
    printf("\t>>> To EXIT : Enter 'c' or 'C'\n");
    printf("\t>>> CURRENT LINKED LIST STATUS : -->\n");
    display_linked_list();
    printf("\n");
    printf("Enter the Key : ");
    scanf("%c",&move);
    return move;
}

int main(){

    while(1){
        //getch();
        system("cls");
        switch(menu()){
        case 'e':
            insert_at_end();
            break;
        case 'E':
            insert_at_end();
            break;
        case 'F':
            insert_at_first();
            break;
        case 'f':
            insert_at_first();
            break;
        case 'P':
            insert_after_particular();
            break;
        case 'p':
            insert_after_particular();
            break;
        case 'D':
            delete_first_node();
            break;
        case 'd':
            delete_first_node();
            break;
        /*case 'd':
            display_linked_list();
            break;
        case 'D':
            display_linked_list();
            break;*/
        case 'c':
            return 0;
        case 'C':
            return 0;
        default:
            printf("\nINVALID ENTRY !");

        }
        getchar();

    }
    return 0;
}
