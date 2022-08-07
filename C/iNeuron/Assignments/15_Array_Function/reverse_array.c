#include<stdio.h>

void reverse(int brr[], int n){
    int i;
    printf("\nReversed Array : ");
    for(i = n-1; i >= 0; i--){
        printf(" %d ",brr[i]);
    }
}

int main(){

    int num, pos, dir;


    printf("Enter the Size of Array : ");
    scanf("%d",&num);
    int arr[num];
    int i;
    for(i = 0; i < num; i++){
        scanf("%d",&arr[i]);
    }
//  printf("\nSize : %d",sizeof(arr));
    printf("\nArray  : ");
    for(i = 0; i < num; i++){
        printf(" %d ",arr[i]);
    }

    reverse(arr, sizeof(arr)/sizeof(arr[0]));

    return 0;
}
