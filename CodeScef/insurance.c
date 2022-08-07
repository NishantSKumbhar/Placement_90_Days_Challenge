#include<stdio.h>

int main(){

    int c;
    scanf("%d",&c);

    while(c--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b){
            printf("%d",b);
        }else{
            printf("%d",a);
        }
    }

    return 0;
}
