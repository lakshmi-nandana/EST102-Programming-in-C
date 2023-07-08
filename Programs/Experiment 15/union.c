/* Declare a union containing 5 string variables(Name, House Name, City Name, State and Pin code) each with a 
length of C_SIZE (user defined constant). Then, read and display the address of a  person using a variable 
of the union. */

#include<stdio.h>
#define C_SIZE 50
union Address
{
    char name[C_SIZE];
    char hname[C_SIZE];
    char cityname[C_SIZE];
    char state[C_SIZE];
    char pin[C_SIZE];
};

int main()
{
    union Address record1;

    printf("Enter name: ");
    scanf("%s",record1.name);
    printf(" Name          : %s \n", record1.name);
    getchar();

    printf("Enter house name: ");
    scanf("%s",record1.hname);
    printf(" House Name    : %s \n", record1.hname);
    getchar();

    printf("Enter city name: ");
    scanf("%s",record1.cityname);
    getchar();
    printf(" City Name       : %s \n", record1.cityname);

    printf("Enter state name: ");
    scanf("%s",record1.state);
    getchar();
    printf(" State name    : %s \n", record1.state);

    printf("Enter pin: ");
    scanf("%s",record1.pin);
    printf(" Pin       : %s \n", record1.pin);
    }

/*
Output:
Enter name: Jasmine
 Name          : Jasmine 
Enter house name: Rosevilla
 House Name    : Rosevilla 
Enter city name: Pala
 City Name       : Pala 
Enter state name: Kottayam
 State name    : Kottayam 
Enter pin: 626451
 Pin       : 626451
*/