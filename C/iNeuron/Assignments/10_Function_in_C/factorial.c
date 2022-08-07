#include<stdio.h>


int factorial(int num){
    if(num < 1){
        return 1;
    }

    return num * factorial(num-1);

}


int main(){
    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);

    printf("\nFactorial of %d is %d", number,factorial(number));
    return 0;
}
