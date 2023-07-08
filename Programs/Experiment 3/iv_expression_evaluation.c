// Qn: Evaluate the arithmetic expression ((a -b / c * d + e) * (f +g)) and display its solution. Read the values of the variables from the user through console

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,exp;
    printf("Enter the values a: ");
    scanf("%d",&a);
    printf("Enter the values b: ");
    scanf("%d",&b);
    printf("Enter the values c: ");
    scanf("%d",&c);
    printf("Enter the values d: ");
    scanf("%d",&d);
    printf("Enter the values e: ");
    scanf("%d",&e);
    printf("Enter the values f: ");
    scanf("%d",&f);
    printf("Enter the values g: ");
    scanf("%d",&g);
    exp=((a -b / c * d + e) * (f + g));
    printf("Result after expression evaluation = %d",exp);
}

/*
Output:
Enter the values a: 1
Enter the values b: 2
Enter the values c: 3
Enter the values d: 4
Enter the values e: 5
Enter the values f: 6
Enter the values g: 7
Result after expression evaluation = 78
*/