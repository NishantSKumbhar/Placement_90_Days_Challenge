#include<stdio.h>

int main(){

    int num1, num2;
    printf("Enter the First Number : ");
    scanf("%d",&num1);
    printf("Enter the Second Number : ");
    scanf("%d",&num2);

    printf("Before Swap %d : %d.",num1,num2);

    int flag = num1;
    num1 = num2;
    num2 = flag;

    printf("\nAfter Swap %d : %d.",num1,num2);

    return 0;
}
