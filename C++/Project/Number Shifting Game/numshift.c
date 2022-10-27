#include<stdio.h>
#include<stdlib.h>  // rand()


/**
 ---------------------
 | 1  | 2  | 3  | 4  |
 | 5  | 6  | 7  | 8  |
 | 9  | 10 | 11 | 12 |
 | 13 | 14 | 15 |    |
 ---------------------

  00    01   02    03
  10    11   12    13
  20    21   22    23
  30    31   32    33
**/

void display_board(int (*p)[4]){
    int i,j;
    printf("\n-------------------------\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(p[i][j] == 0){
                printf("|     ");
            }else{
                printf("| %3d ",p[i][j]);
            }

            if(j == 3){
                printf("|");
            }
        }
        printf("\n");
    }
    printf("-------------------------\n");
    //p[0][0] = 1000;
}



int main(){



    int arr[4][4] = {
                        {11, 3, 4, 12},
                        {5, 1, 6, 8},
                        {2, 7, 9, 10},
                        {14, 13, 15, 0}
                    };
    display_board(arr);
    display_board(arr);

    int board[4][4] = {};

    int s = sizeof(board)/sizeof(board[0][0]);

    printf("\nSize of Board : %d",s);

    return 0;
}

/*
int *p = (int *)malloc(16 * sizeof(int));
    int i;
    for(i = 0; i < 15; i++){
        *(p+i) = rand() % 15 + 1;

    }
    int j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ",p[i* 4 + j]);
        }
        printf("\n");

    }

    free(p);
*/
