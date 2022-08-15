#include<stdio.h>


struct mobile{
    int price;
    char color[20];
    int ram;

};


void display(struct mobile a){

    printf("Mobile Price : %d",a.price);
    printf("\nMobile Color : %s",a.color);
    printf("\nMobile Ram : %d",a.ram);

}

struct mobile input(){
    struct mobile m;
    printf("\nEnter the Price : ");
    scanf("%d",&m.price);
    printf("\nEnter the Color : ");
    fflush(stdin);
    gets(m.color);
    //fgets(m.color, 20, stdin);
    //scanf("%s",&m.color);
    printf("\nEnter the Ram size : ");
    scanf("%d",&m.ram);

    return m;
};


int main(){

    struct mobile m1;
    m1 = input();
    display(m1);
    struct mobile *m2;
    m2 = &m1;
    printf("\n********************************************");
    printf("\nAccessing Through Pointers : ");
    m2 -> price = 121212;
    printf("\nPrice : %d",(*m2).price);

    printf("\nColor : %s",(*m2).color);
    return 0;
}
