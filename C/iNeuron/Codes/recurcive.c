#include<stdio.h>

int main(){

    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);

    int f = factorial(number);
    printf("Factorial of %d is %d.",number,f);

    return 0;
}

int factorial(int num){
    if(num == 1 || num == 0){
        return 1;
    }
    int f_r = num * factorial(num - 1);
    return f_r;
}
