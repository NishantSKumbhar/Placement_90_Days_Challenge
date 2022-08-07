#include<stdio.h>

int fibonacci(int, int, int);

int main(){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);


    printf("Fibonacii Series up to %d terms is : ",num);
    int f = 0;
    int s = 1;
    fibonacci(num, f, s);

    return 0;
}

void fibonacci(int n, int f, int s){

    if(n == 0){
        return;
    }
    printf(" %d ", f);
    fibonacci(n-1, s, f+s);
}

