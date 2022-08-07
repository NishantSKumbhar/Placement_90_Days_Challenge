#include<stdio.h>

int main(){

    int num;
    printf("Enter the  Number : ");
    scanf("%d",&num);
    int flag = num;
    int sum = 0;

    while(num){
        int d;
        d = num % 10;
        sum += d;
        num /= 10;
    }

    printf("Sum of Digits of %d is %d",flag,sum);
    return 0;
}
