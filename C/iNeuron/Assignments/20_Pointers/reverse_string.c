#include<stdio.h>

void reverse(char *p, int n){
    int i;
    for(i = 0; i < n/2; i++){
        int temp = *(p + i);
        *(p + i) = *(p + (n-1) - i);
        *(p + (n-1) - i) = temp;
    }

}
int main(){
    char str[20];
    printf("\nEnter string with max 20 characters : \n");
    fgets(str,20,stdin);
    printf("\nBefore Reverse : ");
    printf("\nString : %s",str);
    int i;
    for(i = 0; *(str+i); i++);
    reverse(str,i-1);

    printf("\nAfter Reverse : ");
    printf("\nSting : %s",str);
    return 0;
}
