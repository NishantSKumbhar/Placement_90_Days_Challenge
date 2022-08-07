#include<stdio.h>

void print_natural_numbers(int n){

    if(n == -1){
        return;
    }

    print_natural_numbers(n-2);
    printf(" %d ",n);
}

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);

    // num = 6
    // 1, 3, 5, 7, 9, 11

    print_natural_numbers(num*2-1);
    return 0;
}

