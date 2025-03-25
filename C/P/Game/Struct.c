#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char Name[15];
    int Class;
    float Mark;
};

void main()
{
    system("clear");

    struct Student s1,s2,s3,s4,s5;
    struct Student ap[]={s1, s2, s3, s4, s5};
    
    char Name[15];
    int Class;
    float Mark;
    
    for (int i=0 ; i<5 ; i++)
    {
        printf("Name  : ");
        scanf("%s", Name);
        printf("Class : ");
        scanf("%d", &Class);
        printf("Mark  : ");
        scanf("%f", &Mark);
        printf("\n");
        
        strcpy((ap[i]).Name,Name);
        (ap[i]).Class=Class;
        (ap[i]).Mark=Mark;
    }

    printf("\n");

    printf("----------------------------------\n");
    printf("| Name          | Class | Mark   |\n");
    
    for (int i=0 ; i<5 ; i++)
        printf("| %-14s| %-6d| %-6.2f |\n", (ap[i]).Name, (ap[i]).Class, (ap[i]).Mark);
    printf("----------------------------------\n");

}
