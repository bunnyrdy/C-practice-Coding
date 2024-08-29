#include<stdio.h>
struct employee
{
    char *name;
    int age;
    int salary;
};
int manager(){
    struct employee manager;
    manager.age = 27;
    if (manager.age > 30)
    {
        manager.salary = 65000;
    } else{
        manager.salary = 55000;
    }
    return manager.salary;
    
}
int main(){
    struct employee emp1;
    struct employee emp2;
    printf("enter the salary of the employee 1");
    scanf("%d",&emp1.salary);
     printf("enter the salary of the employee 2");
    scanf("%d",&emp2.salary);
    printf("the salary of the first employee is :%d\n",emp1.salary);
    printf("the salary of the second employee is :%d\n",emp2.salary);
    printf("the manager salary is:%d",manager());


}