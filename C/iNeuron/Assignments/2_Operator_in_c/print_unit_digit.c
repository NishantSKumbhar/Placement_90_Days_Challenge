#include<stdio.h>

int main(){

    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);

    int uDigit = number % 10;

    printf("Unit Digit of %d Number is %d.",number,uDigit);

    return 0;
}
