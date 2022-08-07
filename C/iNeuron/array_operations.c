#include<stdio.h>


void array_pop(int brr[], int n, int index){
    int i, j;
    if(index >= n){
        printf("\nIndex Out of Range...");

    }else{
        if(index == n-1){
            for(i = 0; i < n-1; i++){
                printf(" %d ",brr[i]);
            }
        }else{
            for(i = 0; i < n-1; i++){
                if(i >= index){
                brr[i] = brr[i+1];
                }
                printf(" %d ",brr[i]);
            }
        }

    }

}

int main(){

    int arr[] = {40,70, 80, 10, 30, 10, 30, 90, 10, 30, 20, 50, 60, 20, 70, 80};
    ///           0, 1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15
    /// First Operation is POP(index)

    int index = 5;
    int s = sizeof(arr)/sizeof(arr[0]);
    array_pop(arr, s, index);

    ///Output should be : [40,70, 80, 10, 30, 30, 90, 10, 30, 20, 50, 60, 20, 70, 80]
    return 0;
}
