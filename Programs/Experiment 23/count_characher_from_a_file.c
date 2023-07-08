/* Qn: Open a text input file and count number of characters, words and lines in it; and store the results in 
an output file. */
 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char fname[50];
    int ch;
    int nl=0,nc=0,nw=0;
    printf("Enter the file name: ");
    scanf("%[^\n]",fname);
    fp=fopen(fname,"r");
    if(fp==NULL)
    {
        printf("Error opening file..");
        exit(1);
    }
    ch=getc(fp);
    while(ch!=EOF)
    {
        if (ch=='\n') 
            nl++;
        if(ch==' ') 
            nw++;
        nc++;
        ch=getc(fp);
    }
    fclose(fp);
    printf("Number of lines=%d \nNumber of words=%d \nNumber of characters = %d\n",nl,nc,nw+nl);
    printf("results are written into result.txt file\n");
    fp=fopen("result.txt","w");
    fprintf(fp,"Number of lines=%d \nNumber of words=%d \nNumber of characters = %d\n",nl,nc,nw+nl);
    fclose(fp);
}
/*
Output:
Enter the file name: text.txt
Number of lines=0 
Number of words=16
Number of characters = 2
results are written into result.txt file
*/