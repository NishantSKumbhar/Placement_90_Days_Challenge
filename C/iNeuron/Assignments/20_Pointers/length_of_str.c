#include<stdio.h>

int length(char *p){
    int i;
    for(i = 0; *(p+i);i++);
    return i-1;
}

int main(){
    char str[20];
    printf("Enter String : \n");
    fgets(str,20,stdin);

    int n = length(str);
    printf("\nLength of String : %s  --> %d",str,n);
    return 0;
}
