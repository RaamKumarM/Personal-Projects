//Palindrome in String
#include <stdio.h>
#include <string.h>

int main()
{
    char ch[15]="HellolleH";
    int l=strlen(ch)-1;
    for (int i=0;i<strlen(ch);i++)
    {
        if (ch[i]!=ch[l])
        {
            printf("Not Palindrome");
            l=0;
            break; 
        }
        else if (l>i)
            l--;
        else
        {
            l=1;
            break;
        }
    }
    if (l)
        printf("Palindrome");
}
