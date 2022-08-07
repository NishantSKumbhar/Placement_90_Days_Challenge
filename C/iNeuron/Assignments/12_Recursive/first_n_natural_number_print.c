#include<stdio.h>

void print_natural_numbers(int n){

    if(n == 0){
        return;
    }

    print_natural_numbers(n-1);
    printf(" %d ",n);
}

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);

    // num = 6
    // 1, 2, 3, 4, 5, 6

    print_natural_numbers(num);
    return 0;
}

