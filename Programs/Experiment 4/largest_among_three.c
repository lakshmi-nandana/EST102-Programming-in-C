// Qn: Read 3 integer values, find the largest among them.

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter second numbers: ");
    scanf("%d", &b);
    printf("Enter third numbers: ");
    scanf("%d", &c);

    if (a >= b && a >= c)
        printf("%d is the largest number", a);

    else if (b >= a && b >= c)
        printf("%d is the largest number", b);

    else
        printf("%d is the largest number", c);
 }

/*
Output:
Enter first numbers: 10
Enter second numbers: 20
Enter third numbers: 30
30 is the largest number
*/