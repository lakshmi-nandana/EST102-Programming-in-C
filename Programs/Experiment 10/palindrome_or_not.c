//Qn: Read a string (word), store it in an array and check whether it is a palindrome word or not.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rstr[100];
    int i,j,ln;
    printf("Enter the string(word): ");
    scanf("%s",str);
    ln=strlen(str);// reversing the string
    for(i=ln-1,j=0;i>=0;i--,j++)
        rstr[j]=str[i];
    rstr[j]='\0';
    if(strcmp(rstr,str)==0)
        printf("The given word is palindrome\n");
    else
        printf("The given word is not a palindrome\n");
 }


/*
Output 1:
Enter the string(word): mom
The given word is palindrome

Output 2:
Enter the string(word): car
The given word is not a palindrome
*/