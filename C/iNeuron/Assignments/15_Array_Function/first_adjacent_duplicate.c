#include<stdio.h>

int adjacent_duplicate(int brr[], int n){
    int i;
    for(i = 0; i < n-1; i++){
        if(brr[i] == brr[i+1]){
            return brr[i];
        }
    }
    return 0;
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

    int d = adjacent_duplicate(arr, sizeof(arr)/sizeof(arr[0]));
    if(d){
        printf("\nFirst Adjacent Duplicate : %d",d);
    }else{
        printf("\nNo Adjacent Duplicate Element.");
    }
    return 0;
}
