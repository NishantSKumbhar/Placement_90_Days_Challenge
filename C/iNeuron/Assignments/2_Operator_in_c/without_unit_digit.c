#include<stdio.h>

int main(){

    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);
    int flag = number;
    flag /= 10;

    printf("Before Number %d  , After Number %d.",number,flag);

    return 0;
}
