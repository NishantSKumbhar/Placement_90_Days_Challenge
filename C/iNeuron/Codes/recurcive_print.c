#include<stdio.h>

int main(){

    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);

    first_natural(number);

    return 0;
}


void first_natural(int num){

        if(num == 0){
            return 0;
        }

        first_natural(num-1);
        printf(" %d ",num);

}
