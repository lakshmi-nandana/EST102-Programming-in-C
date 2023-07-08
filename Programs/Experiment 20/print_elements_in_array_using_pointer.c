// Qn: Input and Print the elements of an array using pointers

#include<stdio.h>
int main()
{
    int arr[100];
    int n, i;
    int * ptr = arr;    // Pointer to arr[0]
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for (i = 0; i < n; i++)
    {
        // (ptr + i) is equivalent to &arr[i]
        scanf("%d", (ptr + i)); 
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++)
    {
        // *(ptr + i) is equivalent to arr[i]
        printf("%d\t", *(ptr + i));
    }
}

/*
Output:
Enter size of array: 6
Enter elements in array: 2
4
5
1
3
6
Array elements: 2       4       5       1       3       6
*/