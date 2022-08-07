#include<stdio.h>

int main(){

    int num1, num2;
    printf("Enter the First Number : ");
    scanf("%d",&num1);
    printf("Enter the Second Number : ");
    scanf("%d",&num2);

    printf("Before Swap a = %d : b = %d.",num1,num2);
    /*
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    */
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;

    printf("\nAfter Swap a = %d : b = %d.",num1,num2);

    return 0;
}
