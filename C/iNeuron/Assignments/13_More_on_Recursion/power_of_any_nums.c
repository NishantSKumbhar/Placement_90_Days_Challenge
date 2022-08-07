#include<stdio.h>

int power(int, int);

int main(){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);
    int flag = num;
    int p = power(num, flag);
    printf("Power of %d  is %d Number",num, p);

    return 0;
}

int power(int n, int flag){


    if(flag == 0){
        return 1;
    }

    return n*power(n, flag-1);

}

