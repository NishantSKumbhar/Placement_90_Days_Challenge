#include<stdio.h>

int smallest_number(int brr[], int m){
    int min = brr[0];
    int i;
    for(i = 0; i < m; i++){
        if(brr[i] < min){
            min = brr[i];
        }
    }
    return min;
}

int main(){

    int num;


    printf("Enter the Size of Array : ");
    scanf("%d",&num);
    int arr[num];
    int i;
    for(i = 0; i < num; i++){
        scanf("%d",&arr[i]);
    }

    printf("\nArray  : ");
    for(i = 0; i < num; i++){
        printf(" %d ",arr[i]);
    }

    printf("\nMaximum Number : %d",smallest_number(arr, num));

    return 0;
}
