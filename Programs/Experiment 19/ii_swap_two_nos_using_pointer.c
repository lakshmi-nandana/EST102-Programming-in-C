//Qn: Using pointer swap two numbers using user defined function.

#include<stdio.h>
// This function swaps values pointed by xp and yp
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main()
{
    int x, y;
    printf("Enter Value of x: ");
    scanf("%d", &x);
    printf("Enter Value of y: ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("\nAfter Swapping: \nx = %d, y = %d", x, y);
    return 0;
} 

/*
Output:
Enter Value of x: 12
Enter Value of y: 13

After Swapping:
x = 13, y = 12
*/