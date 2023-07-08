/* Qn: Read n integers, store them in an array and search for an element in the array using an algorithm for 
Linear Search. */

#include<stdio.h>
int main()
{
    int n, i,a[100],key,flag=-1;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter the list of elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to search: ");
    scanf("%d",&key);
        for (i=0;i<n;i++)
        if (a[i]==key)
        { 
            flag=1;
            break;
        }
    if(flag==1)
        printf("Element is found at index %d\n",i);
    else
        printf("Element is not found\n");  
}

/*
Output:
Enter number of elements: 5
Enter the list of elements: 1
2
3
4
5
Enter the element to search: 4
Element is found at index 3
*/