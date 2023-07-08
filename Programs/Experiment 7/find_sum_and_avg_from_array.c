//Qn: Read n integers, store them in an array and find their sum and average

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n, i,a[100];
    float sum=0,avg;
    printf("Enter  number of elemnts: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("Sum = %f",sum);
    printf("\nAverage = %f",avg);
}



/*
Output:
Enter  number of elemnts: 4
Enter the elements: 1
2
3
4
Sum = 10.000000
Average = 2.500000
*/