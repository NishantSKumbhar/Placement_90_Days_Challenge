#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct board{
    int *arrow;
    int *arr_ptr;
};

struct board *create_board(){

    struct board* b;
    b = (struct board *)malloc(sizeof(struct board));
    b->arr_ptr = (int *)malloc(sizeof(int) * 16);
    b->arrow = b->arr_ptr + 15;


    int i;
    for(i = 0; i < 16; i++){
        *(b->arr_ptr + i) = i+1;
    }
    *b->arrow = 0;
    return b;
}


void print_board(struct board *p){
    int i;
    printf("\n------+------+------+------+\n");
    for(i = 0; i < 16; i++){
        if(i == 4 || i == 8|| i == 12){
            printf("\n");
        }
         if(p->arr_ptr + i == p->arrow){
            printf("      |");
         }else{
            printf(" %3d  |",*(p->arr_ptr + i));
         }
    }
    printf("\n------+------+------+------+\n");

}

int check_winning_condition(struct board *p){
    int i = 0;
    //int flag = 0;
    //printf("\n*+* %d ",*(p->arr_ptr+0));
    while(i < 15){
        if(!(*(p->arr_ptr+i) == i+1)){
            return 0;
        }
        i++;
    }
    return 1;

}

void move_left(struct board *p, int *lives){
    int i;
    if(p->arrow == p->arr_ptr || p->arrow == p->arr_ptr + 4 || p->arrow == p->arr_ptr + 8 || p->arrow == p->arr_ptr + 12){
        printf("\nCANT MOVE LEFTSIDE ! \n");
        getch();
    }else{
        printf("\nYES !\n");
        int temp;
        temp = *(p->arrow);
        *(p->arrow) = *(p->arrow-1);
        *(p->arrow-1) = temp;
        p->arrow = (p->arrow) -1;
        *lives = *lives - 1;
    }
}


void move_right(struct board *p, int *lives){
    int i;
    if(p->arrow == p->arr_ptr + 3 || p->arrow == p->arr_ptr + 7 || p->arrow == p->arr_ptr + 11 || p->arrow == p->arr_ptr + 15){
        printf("\nCANT MOVE RIGHTSIDE ! \n");
        getch();
    }else{
        printf("\nYES !\n");
        int temp;
        temp = *(p->arrow);
        *(p->arrow) = *(p->arrow + 1);
        *(p->arrow+1) = temp;
        p->arrow = (p->arrow) + 1;
        *lives = *lives - 1;
    }
}

void move_upside(struct board *p, int *lives){
    int i;
    if(p->arrow == p->arr_ptr + 0 || p->arrow == p->arr_ptr + 1 || p->arrow == p->arr_ptr + 2 || p->arrow == p->arr_ptr + 3){
        printf("\nCANT MOVE UPSIDE ! \n");
        getch();
    }else{
        printf("\nYES !\n");
        int temp;
        temp = *(p->arrow);
        *(p->arrow) = *(p->arrow - 4);
        *(p->arrow - 4) = temp;
        p->arrow = (p->arrow) - 4;
        *lives = *lives - 1;
    }
}

void move_downside(struct board *p, int *lives){
    int i;
    if(p->arrow == p->arr_ptr + 12 || p->arrow == p->arr_ptr + 13 || p->arrow == p->arr_ptr + 14 || p->arrow == p->arr_ptr + 15){
        printf("\nCANT MOVE DOWNSIDE ! \n");
        getch();
    }else{
        printf("\nYES !\n");
        int temp;
        temp = *(p->arrow);
        *(p->arrow) = *(p->arrow + 4);
        *(p->arrow + 4) = temp;
        p->arrow = (p->arrow) + 4;
        *lives = *lives - 1;
    }
}

char menu(){


    char c;
    printf("\nPress  Target Key  and Hit Enter : \n");
    scanf("%c",&c);
    return c;
}


int main(){
    printf("\n-----------------------------------------------------------------------------------");
    printf("\n                            NUMBER SHIFTING GAME                                   ");
    printf("\n-----------------------------------------------------------------------------------");
    char name[50];
    printf("\nENTER YOUR NAME : ");
    fgets(name, 50, stdin);

    printf("\n WELCOME , %s",name);
    printf("\n HOW TO PLAY GAME  : \n");

    struct board * p = create_board();
    print_board(p);
    int  lives = 10;
    while(lives){
        system("cls");
        if(check_winning_condition(p)){
            printf("\nYOU WIN \n");
        }else{
            printf("\nYOU LOOSE \n");
        }
        printf("Hello %s , You have %d Lives Left\n",name,lives);
        print_board(p);
        switch(menu()){

        case 'a':
            move_left(p, &lives);
            break;
        case 's':
            move_downside(p, &lives);
            break;
        case 'w':
            move_upside(p, &lives);
            break;
        case 'd':
            move_right(p, &lives);
            break;
        case 'e':
            return(0);
            break;

        }

    }
    system("cls");
    if(check_winning_condition(p)){
        printf("\nYOU WIN ");
    }else{
        printf("\nYOU LOSE");
    }
    print_board(p);
    //printf("\n\n**** %d",*p->arrow);
    free(p);
    //printf("\n\n**** %d",*p->arrow);
    return 0;
}

