#include<stdio.h>

int greatest_number(int brr[], int m){
    int max = brr[0];
    int i;
    for(i = 0; i < m; i++){
        if(brr[i] > max){
            max = brr[i];
        }
    }
    return max;
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

    printf("\nMaximum Number : %d",greatest_number(arr, num));

    return 0;
}
