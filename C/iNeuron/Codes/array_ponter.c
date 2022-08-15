#include<stdio.h>


void input(int *brr, int n){
    int i;
    for(i = 0; i < n; i++){

        scanf(" %d ",(brr+i));
    }
    printf("\n");
}


void display(int *crr, int n){

    int i;
    for(i = 0; i < n ; i++){
        printf(" %d ",*(crr+i));
    }
}

int main(){

    int arr[10];
    input(arr, 10);
    display(arr, 10);

    return 0;
}
