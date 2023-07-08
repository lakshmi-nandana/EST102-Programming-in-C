// Qn: Add two numbers using pointers.

#include<stdio.h>
int main()
    {
    int first, second, *p, *q, sum;
    printf("Enter first number: ");
    scanf("%d",&first);
    printf("Enter second number: ");
    scanf("%d",&second);
    p = &first;
    q = &second;
    sum = *p + *q;
    printf("Sum of the numbers = %d\n", sum);
    }


/*
OUtput:
Enter first number: 10
Enter second number: 20
Sum of the numbers = 30
*/