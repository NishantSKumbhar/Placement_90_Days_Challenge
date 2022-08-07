#include<stdio.h>


int digit_contains(int num, int digit){
    while(num > 0){
        int d = num % 10;
        if(d == digit){
            return 1;
        }
        num /= 10;
    }
    return 0;
}

int main(){
    int number, digit;
    printf("Enter the Number : ");
    scanf("%d",&number);
    printf("Enter the Digit : ");
    scanf("%d",&digit);

    if(digit_contains(number, digit)){
        printf("Yes, contains");
    }else{
        printf("Not there!");
    }

    return 0;
}
