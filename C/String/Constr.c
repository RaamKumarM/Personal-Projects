#include <stdio.h>
int main()
{
    char c1[7]="Hello ";
    char c2[6]="World";
    char ch[sizeof(c1)+sizeof(c2)];
    int n=sizeof(c1)-1;
    for(int i=0;i<sizeof(ch);i++)
    {
        if (i<n)
            ch[i]=c1[i];
        else
            ch[i]=c2[i-n];
    }
    printf("%s", ch);
}
