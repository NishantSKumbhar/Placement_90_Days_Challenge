#include<stdio.h>


int even_odd(int num){
    if(num & 1){
        return 0;
    }
    return 1;
}


int main(){
    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);

    if(even_odd(number)){
        printf("%d is Even.",number);
    }else{
        printf("%d is Odd.",number);
    }
    return 0;
}
