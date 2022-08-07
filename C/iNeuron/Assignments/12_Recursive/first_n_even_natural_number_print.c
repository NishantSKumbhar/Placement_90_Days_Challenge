#include<stdio.h>

void print_natural_numbers(int n){

    if(n == 0){
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
    // 2, 4, 6, 8, 10, 12

    print_natural_numbers(num*2);
    return 0;
}

