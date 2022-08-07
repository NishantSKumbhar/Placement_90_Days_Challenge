#include<stdio.h>

int sumNatural(int);

int main(){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);

    int s = sumNatural(num);
    printf("Sum of %d Natural Number is : %d",num,s);

    return 0;
}

int sumNatural(int n){

    if(n == 0){
        return;
    }

    int  s = n+sumNatural(n-1);
    return s;

}

