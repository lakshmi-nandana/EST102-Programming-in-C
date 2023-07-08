// Qn: Read the radius of a circle, calculate its area and display it

#include<stdio.h>
int main()
{
    float radius,area;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    printf("area of circle = %.2f\n",area);
}

/*
Output:
Enter the radius: 4
area of circle = 50.24
*/