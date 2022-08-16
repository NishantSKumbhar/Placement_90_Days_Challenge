#include<stdio.h>

void sort(int *p, int n){
    int i;
    for(i = 0; i < n; i++){
        printf(" %d ",*(p+i));
    }
}

int main(){

    int arr[] = {20, 30, 12, 23, 45, 3, 2, 1,22,90};
    int i;
    printf("\nBefore Sorting : ");
    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf(" %d ",arr[i]);
    }
    sort(arr, sizeof(arr)/sizeof(arr[0]));


    return 0;
}
