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

int check_condition(int (*p)[4], char mov){

        int flag = 1;

        if((p[0][0] == 0 || p[1][0] == 0 || p[2][0] == 0 || p[3][0] == 0 ) && (mov == 'a' || mov == 'A')){
            printf("Invalid Move ! Cant Move Left Side !");
            flag = 0;
        }else if((p[0][3] == 0 || p[1][3] == 0 || p[2][3] == 0 || p[3][3] == 0 ) && (mov == 'd' || mov == 'D')){
            printf("Invalid Move ! Cant Move Right Side !");
            flag = 0;
        }else{
            flag = 1;
        }
        return flag;
        /*if((*k == p[0][0] || *k == p[0][1] || *k == p[0][2] || *k == p[0][3] ) && (mov == 'W' || mov == 'w')){
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
            printf("\nValid");
            return 1;
        }*/
}


void change_board(int (*p)[4], int *k, char mov){
    printf("key : %d | &key : %d\n",*k,k);
    //printf(" *k : %d\n",*k);
    if(check_condition(p,mov)){
        printf("Yes\n");
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

        }else {
            printf("\nYYY\n");
            int i,j;
            for(i = 0; i < 4; i++){
                for(j = 0; j < 4; j++){
                    if(p[i][j] == *k){
                        int u = p[i][j+1];
                        int tar = p[i][j];
                        printf("**target : %d | u : %d\n",tar,u);
                        int tempy = tar;
                        tar = u;
                        u = tempy;
                        break;
                    }
                }
            }
        }

    }else{
        printf("No\n");
    }
}

int main(){
    int arr[4][4] = {{1, 2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15}};
    int i,j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf(" %3d : %d  |",arr[i][j], &arr[i][j]);
        }
        printf("\n");
    }
    int key = arr[3][3];
    print_board(arr, &key);
    printf("***key : %d | &key : %d\n",key,&key);
    char move = 'a';
    change_board(arr, &key, move);
    print_board(arr, &key);
    change_board(arr, &key, move);
    print_board(arr, &key);
    change_board(arr, &key, move);
    print_board(arr, &key);

    change_board(arr, &key, move);
    print_board(arr, &key);

    change_board(arr, &key, move);
    print_board(arr, &key);

    move = 'd';
    check_condition(arr, move);

    change_board(arr, &key, move);
    print_board(arr, &key);
    return 0;
}
