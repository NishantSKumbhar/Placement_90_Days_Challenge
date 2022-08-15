#include<stdio.h>


int length(char *brr){
    int i;
    for(i = 0; *(brr+i); i++){

    }
    return i;
}


int main(){

    printf("Enter the String : ");
    char str[20];
    fgets(str,20,stdin);

    int len = length(str);
    printf("\nLength of %s is %d.",str,len);

    return 0;
}
