/* Write a menu driven program for performing matrix addition, multiplication and finding the transpose. 
   Use functions to
        (i) read a matrix, 
        (ii) find the sum of two matrices,
        (iii) find the product of two matrices,
        (iv) find the transpose of a matrix and (v) display a matrix.
*/

#include<stdio.h>
#include<stdlib.h>
void readmatrix(int a[][100],int m,int n)
{
        int i,j;
        printf("Enter the elements row by row: \n");
        for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                        scanf("%d",&a[i][j]);
}
void displaymatrix(int a[][100],int m,int n)
{
        int i,j;
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                        printf("%5d",a[i][j]);
                printf("\n");
        }
}
void addmatrix(int a[][100],int b[][100],int m,int n)
{
        int i,j,c[100][100];
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
                c[i][j]=a[i][j]+b[i][j];
        printf("Sum of matrix: \n");
        displaymatrix(c,m,n);
}
void transpose(int a[][100],int m,int n)
{
        int i,j,c[100][100];
        for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                c[j][i]=a[i][j];

        displaymatrix(c,n,m);
}
void multmatrix(int a[][100],int b[][100],int m1,int n1,int n2)
{
        int c[100][100],i,j,k;
        // Multiply the two
        for (i = 0; i < m1; i++) 
        {
                for (j = 0; j < n2; j++) 
                {
                        c[i][j] = 0;
                        for (k = 0; k < n1; k++)
                                c[i][j] += a[i][k] * b[k][j];
                }
        }
        printf("Product of matrix: \n");
        displaymatrix(c,m1,n2);
}
int main()
{ 
        int a[100][100],b[100][100],m1,n1,m2,n2,op;
        printf("Enter the row size of the matrix A: ");
        scanf("%d",&m1);
        printf("Enter the column size of the matrix A: ");
        scanf("%d",&n1);
        printf("Enter Matrix A: \n");
        readmatrix(a,m1,n1);

        printf("Enter the row size of the matrix B: ");
        scanf("%d",&m2);
        printf("Enter the column size of the matrix B: ");
        scanf("%d",&n2);
        printf("Enter Matrix B: \n");
        readmatrix(b,m2,n2);

        printf("Matrix A: \n");  
        displaymatrix(a,m1,n1);
        printf("Matrix B: \n");  
        displaymatrix(b,m2,n2);
        while(1)
        {
                printf("1.add   2.multiply    3.transpose    4.exit \n");
                printf("Enter the option: ");
                scanf("%d",&op);
                switch(op)
                {
                        case 1: if(m1==m2 && n1==n2)
                                        addmatrix(a,b,m1,n1);
                                else
                                        printf("Incompatable matrix...cannot add\n");
                                break;

                        case 2: if(n1==m2)
                                        multmatrix(a,b,m1,n1,n2);
                                else
                                        printf("Incompatable matrix...cannot mutliply\n");
                                break;
                        case 3: printf("Transpose of A:\n");
                                transpose(a,m1,n1);
                                printf("Transpose of B:\n");
                                transpose(b,m2,n2);
                                break;
                        case 4: exit(0);
                } 
        }
}


/*
Output:
Enter the row size of the matrix A: 2
Enter the column size of the matrix A: 2
Enter Matrix A: 
Enter the elements row by row:
6
8
4
3
Enter the row size of the matrix B: 2
Enter the column size of the matrix B: 2
Enter Matrix B: 
Enter the elements row by row:
1
2
4
2
Matrix A: 
    6    8
    4    3
Matrix B:
    1    2
    4    2
1.add   2.multiply    3.transpose    4.exit       
Enter the option: 1
Sum of matrix: 
    7   10
    8    5
1.add   2.multiply    3.transpose    4.exit       
Enter the option: 2
Product of matrix: 
   38   28
   16   14
1.add   2.multiply    3.transpose    4.exit
Enter the option: 3
Transpose of A:
    6    4
    8    3
Transpose of B:
    1    4
    2    2
1.add   2.multiply    3.transpose    4.exit
Enter the option: 4
*/