//Qn: Read n integers, store them in an array and sort the elements in the arrayusing Bubble Sort algorithm

#include<stdio.h>
int main()
{
    int n, i,j,a[100],temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter the list of elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if( a[j] > a[j+1])
            {
                // swap the elements
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("The sorted list is : ");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}

/*
Output:
Enter number of elements: 5
Enter the list of elements: 2
4
1
5
3
The sorted list is : 1
2
3
4
5
*/

