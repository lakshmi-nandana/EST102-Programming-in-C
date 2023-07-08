// Qn: Using structure, read and print data of n employees(Name, Employee Id and Salary) 

#include<stdio.h>
struct Employee
{
    int empid;
    char name[50];
    int salary;
}emp[50];
int main()
{ 
    int n,i;
    printf("Enter the number of employees: "); 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the employee details - %d\n",i+1);
        printf("Employee id : ");
        scanf("%d",&emp[i].empid);
        getchar();
        printf("Employee name : ");
        scanf("%[^\n]",emp[i].name);
        printf("Employee salary : ");
        scanf("%d",&emp[i].salary);
    }
    //printing the details
    printf("Employee Details\n");
    printf("Employee id    Employee name   Employee salary\n");
    for(i=0;i<n;i++)
        printf("%-15d %-15s %10d\n",emp[i].empid,emp[i].name,emp[i].salary);
} 

/*
Output:
Enter the number of employees: 3
Enter the employee details - 1
Employee id : 11
Employee name : Manu
Employee salary : 14000
Enter the employee details - 2
Employee id : 22
Employee name : Anu
Employee salary : 13000
Enter the employee details - 3
Employee id : 33
Employee name : Rose
Employee salary : 15000
Employee Details
Employee id    Employee name   Employee salary
11              Manu                 14000
22              Anu                  13000
33              Rose                 15000
*/