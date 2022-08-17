#include<stdio.h>

void vc(char *p){
    int i=0,v=0,c=0;
    while(*(p+i) != '\0'){
        if(*(p+i) == 'A' ||*(p+i) == 'E' ||*(p+i) == 'I' ||*(p+i) == 'O' ||*(p+i) == 'U' ||
           *(p+i) == 'a' ||*(p+i) == 'e' ||*(p+i) == 'i' ||*(p+i) == 'o' ||*(p+i) == 'u' ){
           v++;
           }else if(*(p+i) == '\0'){
                continue;
           }else{
           c++;
           }
        i++;
    }
    printf("\nVowels : %d   ||  Consonants : %d",v,c);
}

int main(){
    char str[50];
    printf("Enter String : \n");
    fgets(str,50,stdin);

    vc(str);
    return 0;
}
