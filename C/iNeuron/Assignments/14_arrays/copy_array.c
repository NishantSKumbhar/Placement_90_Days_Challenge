#include<stdio.h>
#include<limits.h>


int main(){

    int i;
    int arr[10];
    int max = INT_MIN;
    int copy_arr[10];
    for(i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
        copy_arr[i] = arr[i];
    }

    for(i = 0; i < 10; i++){
        printf(" %d  || %d\n",arr[i], copy_arr[i]);
    }


    return 0;
}
