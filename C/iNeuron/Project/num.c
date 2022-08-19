#include<stdio.h>

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

}


void move_left(struct board *p){
    int i;
    if(p->arrow == p->arr_ptr || p->arrow == p->arr_ptr + 4 || p->arrow == p->arr_ptr + 8 || p->arrow == p->arr_ptr + 12){
        printf("\nCANT MOVE LEFTSIDE ! \n");
    }else{
        printf("\nYES !\n");
        int temp;
        temp = *(p->arrow);
        *(p->arrow) = *(p->arrow-1);
        *(p->arrow-1) = temp;
        p->arrow = (p->arrow) -1;
        //*lives = *lives + 1;
    }
}


void move_right(struct board *p){
    int i;
    if(p->arrow == p->arr_ptr + 3 || p->arrow == p->arr_ptr + 7 || p->arrow == p->arr_ptr + 11 || p->arrow == p->arr_ptr + 15){
        printf("\nCANT MOVE RIGHTSIDE ! \n");
    }else{
        printf("\nYES !\n");
        int temp;
        temp = *(p->arrow);
        *(p->arrow) = *(p->arrow + 1);
        *(p->arrow+1) = temp;
        p->arrow = (p->arrow) + 1;
        //*lives = *lives + 1;
    }
}

void move_upside(struct board *p){
    int i;
    if(p->arrow == p->arr_ptr + 0 || p->arrow == p->arr_ptr + 1 || p->arrow == p->arr_ptr + 2 || p->arrow == p->arr_ptr + 3){
        printf("\nCANT MOVE UPSIDE ! \n");
    }else{
        printf("\nYES !\n");
        int temp;
        temp = *(p->arrow);
        *(p->arrow) = *(p->arrow - 4);
        *(p->arrow - 4) = temp;
        p->arrow = (p->arrow) - 4;
        //*lives = *lives + 1;
    }
}

void move_downside(struct board *p){
    int i;
    if(p->arrow == p->arr_ptr + 12 || p->arrow == p->arr_ptr + 13 || p->arrow == p->arr_ptr + 14 || p->arrow == p->arr_ptr + 15){
        printf("\nCANT MOVE DOWNSIDE ! \n");
    }else{
        printf("\nYES !\n");
        int temp;
        temp = *(p->arrow);
        *(p->arrow) = *(p->arrow + 4);
        *(p->arrow + 4) = temp;
        p->arrow = (p->arrow) + 4;
        //*lives = *lives + 1;
    }
}


void controls(int c, struct board *p){
        if(c == 'w' || c == 'W'){
            move_upside(p);
        }else if(c == 's' || c == 'S'){
            move_downside(p);
        }else if(c == 'a' || c == 'A'){
            move_left(p);
        }else if(c == 'd' || c == 'D'){
            move_right(p);
        }else{
            printf("\nI THINK YOU HAVE PRESSED WRONG KEY , PLEASE TRY AGAIN\n");
        }

}

int main(){
    char name[50];
    printf("\nENTER YOUR NAME : ");
    fgets(name, 50, stdin);

    system("cls");

    printf("\n-----------------------------------------------------------------------------------");
    printf("\n                            NUMBER SHIFTING GAME                                   ");
    printf("\n-----------------------------------------------------------------------------------");
    printf("\n WELCOME , %s",name);
    printf("\n HOW TO PLAY GAME  : \n");
    struct board * p = create_board();
    print_board(p);
    int  lives = 15;
    while(lives > 0){

        char c;
        printf("\nPress  Key : ");
        scanf("%d",&c);
        controls(c,p);
        print_board(p);
        lives--;
    }

    return 0;
}
/*
    move_left(p);
    print_board(p);
    move_left(p);
    print_board(p);
    move_left(p);
    print_board(p);
    move_left(p);
    print_board(p);
    move_right(p);
    print_board(p);
    move_right(p);
    print_board(p);
    move_right(p);
    print_board(p);
    move_right(p);
    print_board(p);
    move_upside(p);
    print_board(p);
    move_upside(p);
    print_board(p);
    move_upside(p);
    print_board(p);
    move_upside(p);
    print_board(p);

    move_left(p);
    print_board(p);
    move_left(p);
    print_board(p);
    move_left(p);
    print_board(p);
    move_left(p);
    print_board(p);

    move_downside(p);
    print_board(p);
    move_downside(p);
    print_board(p);
    move_downside(p);
    print_board(p);
    move_downside(p);
    print_board(p);
    */
