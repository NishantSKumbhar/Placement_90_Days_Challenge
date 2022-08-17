#include<stdio.h>

void print_board(int (*p)[4], int *k){
    int i,j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(p[i][j] == *k){
                printf("|     |");
            }else{
            printf("| %3d |",*(*(p+i) + j));
            }
        }
        printf("\n");
    }
    printf("\n\n");
}

int check_condition(int (*p)[4], int *k, char mov){
    int i,j;

        if((*k == p[0][0] || *k == p[0][1] || *k == p[0][2] || *k == p[0][3] ) && (mov == 'W' || mov == 'w')){
            printf("Invalid Move, Can't Move Upward !");
            return 0;
        }else if((*k == *(*p + 12) || *k == p[3][1] || *k == p[3][2] || *k == p[3][3] ) && (mov == 'S' || mov == 's')){
            printf("Invalid Move, Can't Move Downward !");
            return 0;
        }else if((*k == p[0][1] || *k == p[1][0] || *k == p[2][0] || *k == *(*p + 12) ) && (mov == 'A' || mov == 'a')){
            printf("Invalid Move, Can't Move Left Side !");
            return 0;
        }else if((*k == p[0][3] || *k == p[1][3] || *k == p[2][3] || *k == p[3][3] ) && (mov == 'D' || mov == 'd')){
            printf("Invalid Move, Can't Move Right Side !");
            return 0;
        }
        else{
            return 1;
        }
}


void change_board(int (*p)[4], int *k, char mov){
    if(check_condition(p, &k, mov)){
        if(mov == 'a'){
            int i;
            for(i = 0; i < 16; i++){
                if(*(*p+i) == *k){
                    int *t = (*p + i -1);
                    int temp = *t;
                    *t = *(*p + i);
                    *(*p + i) = temp;
                }
            }

        }
    }
}

int main(){
    int arr[4][4] = {{1, 2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15}};
    int key = arr[3][3];
    print_board(arr, &key);
    char move = 's';
    change_board(arr, &key, move);
    /*print_board(arr, &key);
    change_board(arr, &key, move);
    print_board(arr, &key);
    change_board(arr, &key, move);
    print_board(arr, &key);
    change_board(arr, &key, move);
    print_board(arr, &key);*/
    return 0;
}
