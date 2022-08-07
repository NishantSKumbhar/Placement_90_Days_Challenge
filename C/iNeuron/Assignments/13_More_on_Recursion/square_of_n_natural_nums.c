#include<stdio.h>

int square(int);

int main(){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);

    int s = square(num);
    printf("Square of first %d  Natural Number is : %d",num,s);

    return 0;
}

int square(int n){

    if(n == 0){
        return 0;
    }

    int  s = (n*n)+square(n-1);
    //printf("%d ",n);
    return s;

}

