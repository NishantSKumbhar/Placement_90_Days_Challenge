#include<stdio.h>

int main(){
    int arr[4][4] = {{1, 2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int i,j;
    printf("arr --> \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf(" %3d : %d  |",arr[i][j], &arr[i][j]);
        }
        printf("\n");
    }
    printf("-------------------------------------------------------------------------\n");
    printf("arr     : %d \n",arr);
    printf("arr + 1 : %d \n",arr + 1);
    printf("arr + 2 : %d \n",arr + 2);
    printf("arr + 3 : %d \n",arr + 3);
    printf("-------------------------------------------------------------------------\n");
    printf("*arr    : %d \n",*arr);
    printf("*arr + 1 : %d \n",*arr+1);
    printf("*arr + 2 : %d \n",*arr+2);
    printf("*arr + 3 : %d \n",*arr+3);
    printf("*arr + 4 : %d \n",*arr+4);
    printf("*arr + 15 : %d \n",*arr+15);
    printf("-------------------------------------------------------------------------\n");
    printf("*(*arr)    : %d \n",*(*arr));
    printf("*(*arr + 1) : %d \n",*(*arr + 1));
    printf("*(*arr + 2) : %d \n",*(*arr + 2));
    printf("*(*arr + 3) : %d \n",*(*arr + 3));
    printf("*(*arr + 4) : %d \n",*(*arr + 4));
    printf("*(*arr + 15) : %d \n",*(*arr + 15));
    printf("-------------------------------------------------------------------------\n");
    printf("*(arr)   : %d \n",*(arr));
    printf("*(arr+1)   : %d \n",*(arr+1));
    printf("*(arr+2)   : %d \n",*(arr+2));
    printf("*(arr+3)   : %d \n",*(arr+3));
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("*(arr)+1   : %d \n",*(arr) + 1);
    printf("*(arr+1)+1   : %d \n",*(arr+1) + 1);
    printf("(arr+1)+1   : %d \n",(arr+1) + 1);
    printf("(*arr + 1)   : %d \n",*arr+1);
    printf("(*arr + 1 -1)   : %d \n",*arr+1-1);
    printf("-------------------------------------------------------------------------\n");
    int k = 16;
    for(i = 0; i < 16; i++){
        if(*(*arr+i) == k){
            printf(" %d ",i);
            int *p = *arr+i-1;
            printf(" %d ",*p);
            int temp = *(*arr+i);
            *(*arr+i) = *p;
            *p = temp;
        }
    }
    printf("\nNew array : ");
    for(i = 0; i < 16; i++){
        printf(" %d ",*(*arr + i));
    }
    return 0;
}
