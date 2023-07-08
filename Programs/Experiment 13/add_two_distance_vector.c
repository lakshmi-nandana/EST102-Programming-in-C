/*Qn: Read two input each representing the distances between two points in the  Euclidean space, 
store these in structure variables and add the two distance values.
*/

#include<stdio.h>
struct Point
{
    int x;
    int y;
}p1,p2,p3;
int main()
{
    printf("Enter the first point(x1,y1): "); 
    scanf("%d,%d",&p1.x,&p1.y);
    printf("Enter the second point(x2,y2): "); 
    scanf("%d,%d",&p2.x,&p2.y);
    p3.x=p1.x+p2.x;
    p3.y=p1.y+p2.y;
    printf("new point after addition: ");
    printf("(%d,%d)\n",p3.x,p3.y);
}

/*
Output:
Enter the first point(x1,y1): 10,15
Enter the second point(x2,y2): 20,5
new point after addition: (30,20)
*/