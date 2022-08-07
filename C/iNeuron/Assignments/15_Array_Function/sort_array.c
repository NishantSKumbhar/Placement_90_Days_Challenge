#include<stdio.h>

int bubble_sort(int brr[], int m){
    int i,j;
    for(i = 0; i < (m-1); i++){
        for(j = 0; j < (m-1); j++){
            if(brr[j] > brr[j+1]){
                int temp = brr[j];
                brr[j] = brr[j+1];
                brr[j+1] = temp;
            }
        }
    }

    printf("\nSorted Array  : ");
    for(i = 0; i < m; i++){
        printf(" %d ",brr[i]);
    }
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

   bubble_sort(arr, num);

    return 0;
}
