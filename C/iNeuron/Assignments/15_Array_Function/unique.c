#include<stdio.h>

void unique(int brr[], int n){
    // first we sort the array
    // we use selection sort

    int i,j,temp;
    for(i = 0; i < n-1; i++){
        for(j = i; j < n; j++){
            if(brr[i] > brr[j]){
                temp = brr[i];
                brr[i] = brr[j];
                brr[j] = temp;
            }
        }
    }
    /*
    printf("\nSorted Array  : ");
    for(i = 0; i < n; i++){
        printf(" %d ",brr[i]);
    }
    */

    for(i = 0; i < n; i++){
        if(brr[i] == brr[i+1]){
            brr[i] = 0;
        }
    }
    printf("\nArray with unique Elements : ");
    for(i = 0; i < n; i++){
        if(brr[i]){
        printf(" %d ",brr[i]);
        }
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
//  printf("\nSize : %d",sizeof(arr));
    printf("\nArray  : ");
    for(i = 0; i < num; i++){
        printf(" %d ",arr[i]);
    }

    unique(arr, sizeof(arr)/sizeof(arr[0]));

    return 0;
}
