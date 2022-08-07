#include<stdio.h>

int count_digits(int);

int main(){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);
    //int flag = 0;
    int d = count_digits(num);
    printf("There are %d digits in %d Number",d,num);

    return 0;
}

int count_digits(int n){
    int flag = 0;
    /*
    while(n){
        flag++;
        n /= 10;
    }
    return flag;
    */
    if(n <= 0){
        return;
    }

    return flag+1 + count_digits(n/10);

}

