#include<stdio.h>

int sumNatural(int);

int main(){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);

    int s = sumNatural(num*2 - 1);
    printf("Sum of %d Natural Number is : %d",num,s);

    return 0;
}

int sumNatural(int n){

    if(n == -1){
        return 0;
    }

    int  s = n+sumNatural(n-2);
    printf("%d ",n);
    return s;

}

