// Qn:Read a string (word), store it in an array and obtain its reverse by using a user defined function.

#include<stdio.h>
#include<string.h>
void reversestr(char str[])
{   
    int i,l;
    char c;
    l=strlen(str); //instead of strlen we can use this code ----  l=0; while ( str[l]!='\0') l++;
    for(i=0;i<l/2;i++)
    {   
        c=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=c;
    }
}
int main()
{
    char str[100];
    printf("Enter the string: "); 
    scanf("%s",str);
    reversestr(str);
    printf("Reversed string is = %s",str);
}

/*
Output:
Enter the string: english 
Reversed string is = hsilgne
*/