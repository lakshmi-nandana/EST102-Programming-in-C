/* Create a file and perform the following
        i) Write data to the file
        ii) Read the data in a given file & display the file content on console
        iii) append new data and display on console
*/

#include<stdio.h>
void main()
{ 
    FILE *fp;
    char c;
    fp=fopen("text.txt","w");
    printf("Enter the text to the file: ");
    c=getchar();
    while(c!='\n')
    {
        fputc(c,fp);
        c=getchar();
    }
    fclose(fp);
    
    
    fp=fopen("text.txt","r");
    printf("Text read from the file : ");
    c=fgetc(fp);
    while(c!=EOF)
    {
        printf("%c",c);
        c=fgetc(fp);
    }
    fclose(fp);
    
    
    fp=fopen("text.txt","a");
    printf("\nEnter text to be appended to the file: ");
    c=getchar();
    while(c!='\n')
    {
        putc(c,fp);
        c=getchar();
    }
    fclose(fp);
    
    
    fp=fopen("text.txt","r");
    printf("Text read from file after appending: ");
    c=getc(fp);
    while(c!=EOF)
    {
        printf("%c",c);
        c=getc(fp);
    }
    fclose(fp);
}


/*
Output:
Enter the text to the file: Computer
Text read from the file : Computer
Enter text to be appended to the file:  Science 
Text read from file after appending: Computer Science
*/