#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    system("clear");

    int n=0, m=0, b[2]; 
    char ch[60]="The Almond is Great and Something else that Ketchup";
    
    for(int i=0 ; i<strlen(ch) ; i=i+n+1)
    {
        n=0;
        for(int j=i ; (ch[j]!=' ')&&(ch[j]!='\0') ; j++)
            n++;

        if (n>m)
        {
            m=n;
            b[0]=i;
            b[1]=i+n;
        }
        //printf("%d %d %d %d\n", n ,m ,b[0], b[1]);
    }
    for(int i=b[0] ; i<b[1] ; i++)
        printf("%c", ch[i]);
}
