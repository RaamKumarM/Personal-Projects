#include <stdio.h>
#include <string.h>

int check(char x[], int y)
{
    static int n=0;
    for (int i=0; i<strlen(x) ; i++)
    {
        if (x[i]==y)
            return 0;
    }
    x[n]=y;
    n++;
}

int main()
{
    char ch[20]="Hello World,ant on u";
    char v[11]="aeiouAEIOU";
    char v2[11];

    printf("Vowels: ");
    for(int i=0 ; i<strlen(ch) ; i++)
        for(int j=0 ; j<strlen(v) ; j++)
            if (ch[i]==v[j])
                check(v2,v[j]);
    for(int i=0 ; i<strlen(v2) ; i++)
        printf("%c", v2[i]);
}

