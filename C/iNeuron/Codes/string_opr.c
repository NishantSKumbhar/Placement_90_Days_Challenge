#include<stdio.h>

int main(){
    char str[20] = "Nishant";
    printf("\n%s",str);

    printf("\n%d",strlen(str));
    printf("\n%s",strrev(str));
    printf("\n%s",strlwr(str));
    printf("\n%s",strupr(str));

    printf("\n************************************");

    char names[3][10];
    int i;
    for(i = 0; i <=2 ; i++){
        scanf("%s",&names[i][0]);
    }

    for(i = 0; i <= 2; i++){
        printf(" %s ",names[i]);
    }
    return 0;
}
