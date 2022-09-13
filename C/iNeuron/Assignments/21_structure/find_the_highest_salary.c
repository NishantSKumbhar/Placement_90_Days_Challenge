#include<stdio.h>
#include<conio.h>

struct Employee{
    int salary;
    int id;
    char name[20];
};


void findMaxSalary(struct Employee smax[], int n){
    int i;
    struct Employee max = smax[0];
    for(i = 0; i < n-1; i++){

        if(smax[i].salary > max.salary){
            max = smax[i];
        }
    }
    printf("\nName : %s",max.name);
    printf("\nId : %d",max.id);
    printf("\nSalary : %d",max.salary);
}

int main(){
    struct Employee e1,e2,e3,e4,e5,e6,e7,e8,e9,e10;
    e1.salary = 12000;
    e1.id = 1;
    strcpy(e1.name, "Ramesh");
    //e1.name = "Ramesh";

    e2.salary = 21000;
    e2.id = 2;
    strcpy(e2.name, "Suresh");
    //e2.name = "Suresh";


    e3.salary = 10000;
    //e3.name = "Ram";
    strcpy(e3.name, "Ram");
    e3.id = 3;

    e4.salary = 19000;
    //e4.name = "Mohan";
    strcpy(e4.name, "Mohan");
    e4.id = 4;


    e5.salary = 11000;
    //e5.name = "Manish;
    strcpy(e5.name, "Manish");
    e5.id = 5;


    e6.salary = 98000;
    strcpy(e6.name, "Urvashi");
    //e6.name = "Urvashi";
    e6.id = 6;


    e7.salary = 11000;
    strcpy(e7.name, "Dom");
    //e7.name = "Dom";
    e7.id = 7;


    e8.salary = 20000;
    strcpy(e8.name, "Jack");
    //e8.name = "Jack";
    e8.id = 8;


    e9.salary = 1000;
    strcpy(e9.name, "Moula");
    //e9.name = "Moula";
    e9.id = 9;


    e10.salary = 9000;
    strcpy(e10.name, "Navin");
    //e10.name = "Navin";
    e10.id = 10;
    printf("Highest Salary Employee : \n");
    struct Employee emps[10] = {e1,e2,e3,e4,e5,e6,e7,e8,e9,e10};

    findMaxSalary(emps, 10);
    return 0;
}
