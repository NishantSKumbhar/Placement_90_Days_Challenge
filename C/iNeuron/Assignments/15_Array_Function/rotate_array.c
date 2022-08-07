#include<stdio.h>

void rotate_array(int brr[], int m, int dir, int pos){
    int i,j,k,temp;
    if(dir == 0){

        while(pos--){
            temp = brr[0];
            for(i = 0; i < (m-1); i++){
            brr[i] = brr[i+1];
            }
            brr[m-1] = temp;
        }

    }else if(dir == 1){
        while(pos--){
        temp = brr[m-1];
        int tp;
        for(i = 0; i < m; i++){
            int tp;
            tp = brr[i];
            brr[i] = temp;
            temp = tp;

        }
        brr[0] = temp;
        }
    }else{
        printf("\nWrong Direction !");
        return 0;
    }

    printf("\nAfter Rotation Array  : ");
    for(i = 0; i < m; i++){
        printf(" %d ",brr[i]);
    }
}

int main(){

    int num, pos, dir;


    printf("Enter the Size of Array : ");
    scanf("%d",&num);
    int arr[num];
    int i;
    for(i = 0; i < num; i++){
        scanf("%d",&arr[i]);
    }
//  printf("\nSize : %d",sizeof(arr));
    printf("\nArray  : ");
    for(i = 0; i < num; i++){
        printf(" %d ",arr[i]);
    }
    printf("\nEnter Positions : ");
    scanf("%d",&pos);
    printf("\nIf Left then Enter 0 or If Right then Enter 1 : ");
    scanf("%d",&dir);

    rotate_array(arr, num,dir, pos);

    return 0;
}
