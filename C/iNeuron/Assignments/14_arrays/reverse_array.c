#include<stdio.h>
#include<limits.h>


int main(){

    int i;
    int arr[10];
    int max = INT_MIN;
    for(i = 0; i < 10; i++){
        scanf("%d",&arr[i]);

    }

    for(i = 9; i >= 0; i--){
        printf(" %d ",arr[i]);
    }


    return 0;
}
