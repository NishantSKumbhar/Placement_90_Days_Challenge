#include<stdio.h>

void reverse(int *p, int n){
    int i;
    for(i = 0; i < n/2; i++){
        int temp = *(p + i);
        *(p + i) = *(p + (n-1) - i);
        *(p + (n-1) - i) = temp;
    }
}
int main(){
    int arr[10];
    printf("\nEnter 10 Elements : \n");
    int i;
    for(i = 0; i < 10; i++){
        scanf("%d",arr+i);
    }

    printf("\nBefore Reverse : ");
    for(i = 0; i < 10; i++){
        printf(" %d ",*(arr+i));
    }

    reverse(arr, 10);

    printf("\nAfter Reverse : ");
    for(i = 0; i < 10; i++){
        printf(" %d ",*(arr+i));
    }
    return 0;
}
