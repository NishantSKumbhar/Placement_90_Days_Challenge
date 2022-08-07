#include<stdio.h>

int sumNatural(int);

int main(){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);

    int s = sumNatural(num*2);
    printf("Sum of first %d even Natural Number is : %d",num,s);

    return 0;
}

int sumNatural(int n){

    if(n == 0){
        return 0;
    }

    int  s = n+sumNatural(n-2);
    //printf("%d ",n);
    return s;

}

