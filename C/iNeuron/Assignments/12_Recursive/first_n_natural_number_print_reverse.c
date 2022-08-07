#include<stdio.h>

void print_natural_numbers(int n){

    if(n == 0){
        return;
    }
    printf(" %d ",n);
    print_natural_numbers(n-1);

}

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);

    // num = 6
    // 6, 5, 4, 3, 2, 1

    print_natural_numbers(num);
    return 0;
}

