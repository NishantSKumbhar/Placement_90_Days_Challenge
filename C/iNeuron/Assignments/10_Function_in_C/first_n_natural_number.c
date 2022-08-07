#include<stdio.h>


void natural(int num){
    if(num == 0){
        return;
    }

    natural(num-1);
    printf(" %d ",num);
}


int main(){
    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);

    natural(number);
    return 0;
}
