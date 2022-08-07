#include<stdio.h>

void print_natural_numbers(int n){

    if(n == -1){
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
    // 11, 9, 7, 5, 3, 1

    print_natural_numbers(num*2 -1);
    return 0;
}

