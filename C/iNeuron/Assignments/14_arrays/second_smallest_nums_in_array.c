#include<stdio.h>
#include<limits.h>


int main(){

    int i;
    int arr[10];
    int max = INT_MIN;
    for(i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int j;

    for(i = 0; i < 10; i++){
        int c = 0;
        for(j = 0; j < 10; j++){
            if(arr[i] > arr[j]){
                c++;
            }
        }
        if(c == 1){
            printf("Second Smallest : %d ",arr[i]);
            break;
        }
    }


    return 0;
}
