#include<stdio.h>

void print_natural_numbers(int n){

    if(n == 0){
        return;
    }
    printf(" %d ",n);
    print_natural_numbers(n-2);

}

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);

    // num = 6
    // 12, 10, 8, 6, 4, 2

    print_natural_numbers(num*2);
    return 0;
}

