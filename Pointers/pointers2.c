#include<stdio.h>

void display(int (*A)[3]){  // A[][3]
    int i;
    for(i = 0; i < 6; i++){
        printf(" %d ",*(*A + i));
    }
}

int main(){

    int arr[2][3] = {{1,2,3},{4,5,6}};
    int i,j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("| %d - %d ",arr[i][j],&arr[i][j]);
        }
        printf("\n");
    }

    int (*p)[3] = arr;
    printf("\n %d ",p);
    printf("\n %d ",*p);
    printf("\n %d ",p+1);
    printf("\n %d ",*(*(p+1)));
    printf("\n %d ",*(*p+1));
    printf("\n-----------------------------------\n");
    for(i = 0; i < 6; i++){
        printf(" %d ",*(*p+i));
    }

    printf("\n-----------------------------------\n");
    printf("\nDisplay :");
    display(arr);
    return 0;
}
