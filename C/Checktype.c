#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if (((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
    {
        if ((ch>='a')&&(ch<='z'))
        {
            printf("Alphabet in Lowercase");
        }
        else if (((ch>='A')&&(ch<='Z')))
        {
            printf("Alphabet in Uppercase");
        }
    }
    else if ((ch>='0')&&(ch<='9'))
    {
        printf("Numeric");
    }
    else
    {
        printf("Special Character");
    }
}
