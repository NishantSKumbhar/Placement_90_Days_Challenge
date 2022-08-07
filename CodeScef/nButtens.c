#include<stdio.h>

int main(){

    int T;
    ///printf("Tests : ");
    scanf("%d",&T);

    while(T--){
        int N;
        ///printf("No of Buttons : ");
        scanf("%d",&N);
        int i = 0;
        char S[N];
        scanf("%s",S);
        ///printf("\nResult : %s \n",S);
        /// Initially bulb is ON

        char R[N];
        scanf("%s",R);

        int initial = 1;
        int j;
        for(j = 0; R[j]; j++){
            if(R[j] == '1'){
                initial = !initial;
            }
        }

        printf("\nlResult : %d ",initial);
    }

    return 0;
}
