#include<stdio.h>

int main(){
    //Not Compile Time Error
    int arr[5];
    int i;
    for(i = 0; i < 10; i++){
        printf("Enter : ");
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < 10; i++){
        printf("\n%d",arr[i]);
    }

    return 0;
}
