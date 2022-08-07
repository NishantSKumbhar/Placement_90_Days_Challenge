#include<stdio.h>


void prime_factors(int num){

    if(num == 1){
        return 1;
    }
    int i;
    for(i = 2; i <= num; i++){
        if(num % i == 0){
            printf(" %d ",i);
            prime_factors(num/i);
            break;
        }

    }
}

int main(){
    int number, digit;
    printf("Enter the Number : ");
    scanf("%d",&number);


    prime_factors(number);

    return 0;
}
