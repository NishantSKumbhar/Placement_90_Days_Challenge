#include<stdio.h>
#include<conio.h>

struct Employee{
    int salary;
    int id;
    char name[20];
};


void sortEmployee(struct Employee smax[], int n){
    int i,j;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1; j++){
            if(smax[j+1].name[0] < smax[j].name[0]){
                struct Employee e;
                e = smax[j];
                smax[j] = smax[j+1];
                smax[j+1] = e;
            }
        }
    }
}

int main(){
    struct Employee e1,e2,e3,e4,e5,e6,e7,e8,e9,e10;
    e1.salary = 12000;
    e1.id = 1;
    strcpy(e1.name, "Ramesh");

    e2.salary = 21000;
    e2.id = 2;
    strcpy(e2.name, "Suresh");


    e3.salary = 10000;
    strcpy(e3.name, "Ram");
    e3.id = 3;

    e4.salary = 19000;
    strcpy(e4.name, "Mohan");
    e4.id = 4;


    e5.salary = 11000;
    strcpy(e5.name, "Manish");
    e5.id = 5;


    e6.salary = 98000;
    strcpy(e6.name, "Urvashi");
    e6.id = 6;


    e7.salary = 11000;
    strcpy(e7.name, "Dom");
    e7.id = 7;


    e8.salary = 20000;
    strcpy(e8.name, "Jack");
    e8.id = 8;


    e9.salary = 1000;
    strcpy(e9.name, "Moula");
    e9.id = 9;


    e10.salary = 9000;
    strcpy(e10.name, "Navin");
    e10.id = 10;

    printf("\nBefore Sorting Order of Employee : \n");

    struct Employee emps[10] = {e1,e2,e3,e4,e5,e6,e7,e8,e9,e10};
    int i;
    for(i = 0; i < 10; i++){
        printf("\nId : %2d | Name : %10s | Salary : %d ",emps[i].id,emps[i].name,emps[i].salary);
    }
    sortEmployee(emps, 10);

    printf("\n\nBefore Sorting Order of Employee : \n");
    for(i = 0; i < 10; i++){
        printf("\nId : %2d | Name : %10s | Salary : %d ",emps[i].id,emps[i].name,emps[i].salary);
    }
    return 0;
}
