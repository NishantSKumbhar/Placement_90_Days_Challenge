#include<stdio.h>

int main(){

    int a = 3, b = 6;
    int i;
    for(i = 1; i < 100; i++){
        if(i % 3 == 0){
            printf("Fizz");
        }else{

            printf(" %d ",i);
        }
        if(i % 6 == 0){
            printf("Buzz");
        }
        printf("\n");
    }

    return 0;
}
