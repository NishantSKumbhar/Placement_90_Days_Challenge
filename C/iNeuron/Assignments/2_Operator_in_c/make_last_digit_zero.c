#include<stdio.h>

int main(){

    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);

    number = (number / 10) * 10;
    printf("Number : %d",number);


    return 0;
}
