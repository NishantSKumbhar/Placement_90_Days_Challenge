#include<stdio.h>

int sorted(int *arr[], int n){

    // use bubble sort
    int temp,i,j;
    for(i = 0; i < n-1; i++){
        for(j= 0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = arr[j];
            }
        }
    }
     printf("\n after Array  1 : ");
    for(i = 0; i < n; i++){
        printf(" %d ",arr[i]);
    }
}


void decending(int arr[], int brr[], int n){
    sorted(arr, n);
    //sorted(brr, n);
    int i;
    printf("\nArray  1 : ");
    for(i = 0; i < n; i++){
        printf(" %d ",arr[i]);
    }

    printf("\nArray  2 : ");
    for(i = 0; i < n; i++){
        printf(" %d ",brr[i]);
    }

}


int main(){

    int num;


    printf("Enter the Size of Array : ");
    scanf("%d",&num);
    int arr[num], brr[num];
    int i;
    printf("\nArray  1 : ");
    for(i = 0; i < num; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nArray  2 : ");
    for(i = 0; i < num; i++){
        scanf("%d",&brr[i]);
    }
//  printf("\nSize : %d",sizeof(arr));
    printf("\nArray  1 : ");
    for(i = 0; i < num; i++){
        printf(" %d ",arr[i]);
    }

    printf("\nArray  2 : ");
    for(i = 0; i < num; i++){
        printf(" %d ",brr[i]);
    }

    decending(arr, brr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}
