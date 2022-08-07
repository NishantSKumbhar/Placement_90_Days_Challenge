#include<stdio.h>

void print_reverse_numbers(int n){

    if(n == 0){
        return;
    }


    printf(" %d ",n%10);
    print_reverse_numbers(n/10);
}

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);

    // num = 234
    // 432

    print_reverse_numbers(num);
    return 0;
}

