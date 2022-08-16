#include<stdio.h>

int length(char *c){
    int i;
    for(i = 0;  *(c+i) != '\0'; i++);
    return i;

}

int main(){

    char name[20];
    printf("Enter the String : ");
    fgets(name,20,stdin);

    int l = length(name);

    printf("\nLength of String is: %d",l);


    return 0;
}
