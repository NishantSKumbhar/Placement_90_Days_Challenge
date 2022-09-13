#include<stdio.h>

struct Employee{
    int salary;
    int id;
    char name[20];
};

void display(struct Employee e1){
    printf("Id : %d\n",e1.id);
    printf("Name : %s\n",e1.name);
    printf("Salary : %d\n",e1.salary);
}

int main(){
    struct Employee e1;
    printf("Enter the Employee Name : ");
    fgets(e1.name, 20, stdin);
    printf("Enter the Id of Employee : ");
    scanf("%d",&e1.id);
    printf("Enter the Salary of Employee : ");
    scanf("%d",&e1.salary);

    display(e1);
    return 0;
}
