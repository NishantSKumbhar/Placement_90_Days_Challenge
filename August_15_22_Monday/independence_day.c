#include<stdio.h>


int factorial(int num){

    if(num == 1){
        return 1;
    }

    int f = num * factorial(num-1);
    return f;
}


int main(){
    /*
    float percentage = 98.5, p;
    printf("\nPercentage is : %f\n",percentage);
    scanf("%f",&p);
    printf("\nNew Percentage is : %.2f\n",p);

    int x = 10>8>2;
    printf("\nX : %d",x);

    int n;
    printf("\nEnter the Number for Factorial :");
    scanf("%d",&n);
    printf("\nFactorial is : %d",factorial(n));
    */

    int i = 1;
    while(i < 10){
        printf("\n %d ",i);
        i++;
    }

    printf("\nJust After looping whole");

    return 0;
}
