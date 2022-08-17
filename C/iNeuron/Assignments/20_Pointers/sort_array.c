#include<stdio.h>

void sort(int *p, int size){
    int i,j;
    for(i = 0; i < (size)-1; i++){
        for(j = 0; j < (size)-1 ; j++){
            if(*(p+j) > *(p+j+1)){
                int temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
                }
            }
    }
}

int main(){
    printf("\nEnter 10 Numbers:");
    int arr[10],i;
    for(i=0; i < 10; i++){
        printf("\n>>> ");
        scanf("%d",(arr+i));
    }
    printf("\nBefore Sort : \n");
    for(i=0; i < 10; i++){
        printf(" %d ",*(arr+i));
    }
    sort(arr, sizeof(arr)/sizeof(arr[0]));
    printf("\nAfter Swap :\n");

    for(i=0; i < 10; i++){
        printf(" %d ",*(arr+i));
    }
    return 0;
}
