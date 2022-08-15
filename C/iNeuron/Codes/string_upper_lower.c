#include<stdio.h>


int main(){
    printf("Enter the String : ");
    char str[20];
    gets(str);

    //printf("\nHello  : %s\n",str);


    /**

    A : 65
    a : 97

    a-32 = A
    **/
    int i;
    for(i = 0; str[i]; i++){
        if(str[i] >= 97){
            str[i] -= 32;
        }
    }

    printf("\n%s",str);
    return 0;
}
