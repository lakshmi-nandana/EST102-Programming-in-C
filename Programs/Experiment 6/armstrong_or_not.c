//Qn: Read a Natural Number and check whether the number is Armstrong or not

#include<stdio.h>
int main()
{
    int n,r,c,sum=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n); //finding number of digits(nd) in the number
    //by converting into string and find the length
    temp=n;
    while(n>0)
    {
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;
    }
    n=temp;
    if ( n==sum)
        printf("\n%d is an Armstrong number", n);
    else
        printf("\n%d is not a Armstrong number", n);
}
/*
Output 1:
Enter a number: 153
153 is an Armstrong number

Output 2:
Enter a number: 120
120 is not a Armstrong number
*/