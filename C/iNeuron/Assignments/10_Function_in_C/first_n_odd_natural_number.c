#include<stdio.h>


void natural(int num){
    if(num < 0){
        return;
    }

    natural(num-2);
    printf(" %d ",num);
}


int main(){
    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);

    natural(number* 2- 1);
    return 0;
}
