//Qn: Read a Natural Number and check whether the number is prime or not

#include<stdio.h>
int main()
{
    int n, i, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
        {
        // check for factors from 2 to n/2, no factors other than 1 and n ,its a prime number
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
}

/*
Output 1:
Enter a number: 23
23 is a prime number

Output 2:
Enter a number: 26
26 is not a prime number
*/