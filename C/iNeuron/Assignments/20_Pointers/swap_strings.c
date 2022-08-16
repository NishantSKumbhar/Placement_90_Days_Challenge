#include<stdio.h>

void swap(char (*s1)[20], char (*s2)[20]){
    char temp[20];
    strcpy(temp, *s1);
    //temp = *s1;
    strcpy(*s1, *s2);
    //*s1 = *s2;
    strcpy(*s2, temp);
    //*s2 = temp;

}

int main(){

    char a[20],b[20];
    printf("\nEnter the Two Strings : ");
    fgets(a, 20, stdin);
    fgets(b, 20, stdin);


    printf("\nBefore Swap -> s1 : %s   and   s2 : %s",a,b);
    swap(a,b);
    printf("\nAfter Swap -> s1 : %s   and   s2 : %s",a,b);
    return 0;
}
