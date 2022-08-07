#include<stdio.h>

int main(){



    int num, digit;
    printf("\nEnter the Number : ");
    scanf("%d",&num);
    printf("Enter the Digit : ");
    scanf("%d",&digit);
    int rev = digit;

    while(num>0){
        int a = num % 10;
        rev = rev*10 + a;
        num /= 10;
    }
    int r = 0;
    while(rev>0){
        int a = rev % 10;
        r = r*10 + a;
        rev /= 10;
    }

    printf("exact : %d",r);
    return 0;
}
