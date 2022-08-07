#include<stdio.h>

int factorial(int);

int main(){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);

    int s = factorial(num);
    printf("Factorial of %d Number is : %d",num,s);

    return 0;
}

int factorial(int n){

    if(n == 0){
        return 1;
    }

    int  s = n * factorial(n - 1);
    //printf("%d ",n);
    return s;

}

