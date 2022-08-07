#include<stdio.h>

int main(){

    int arr[10];
    int i = 0, s_e = 0, s_o = 0, c = 0;
    printf("How many numbers in array : ");
    scanf("%d",&c);
    while(i < c){
        printf("Enter(%d) : ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i] & 1){
            s_o += arr[i];
        }else{
            s_e += arr[i];
        }
        i++;
    }

    printf("\nSum of Even : %d",s_e);
    printf("\nSum of Odd : %d",s_o);

    return 0;
}
