#include<stdio.h>


struct Employee{
    int salary;
    int id;
    char name[20];
};

int main(){
    struct Employee e1;
    printf("Enter the Employee Name : ");
    fgets(e1.name, 20, stdin);
    printf("Enter the Id of Employee : ");
    scanf("%d",&e1.id);
    printf("Enter the Salary of Employee : ");
    scanf("%d",&e1.salary);

    return 0;
}
