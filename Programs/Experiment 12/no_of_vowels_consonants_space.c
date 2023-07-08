/* Qn: Read a string (ending with a $ symbol), store it in an array and count the number of vowels, 
consonants and spaces in it. */

#include<stdio.h>
int main()
{
    char str[150];
    int i, vowels, consonants, digits, spaces;
    vowels =  consonants = digits = spaces = 0;
    printf("Enter a  string: ");
    scanf("%[^\n]", str);
    for(i=0; str[i]!='\0'; ++i)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u' || str[i]=='A' ||
           str[i]=='E' || str[i]=='I' || str[i]=='O' ||
           str[i]=='U')
        {
            ++vowels;
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            ++consonants;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            ++digits;
        }
        else if (str[i]==' ')
        {
            ++spaces;
        }
    }
    printf("Vowels: %d",vowels);
    printf("\nConsonants: %d",consonants);
    printf("\nDigits: %d",digits);
    printf("\nWhite spaces: %d\n", spaces);
}


/*
Output:
Enter a  string: Twinkle Twinkle Little Star
Vowels: 7
Consonants: 17
Digits: 0
White spaces: 3
*/