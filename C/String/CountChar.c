#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20]="hello world hi";
    int n=0,m=0;
    char c[10];
    for(int i=0;i<strlen(ch);i++)
    {
        m=1;
        for(int j=0;j<sizeof(c);j++)
        {
            if (ch[i]==c[j])
            {
                m=0;
                break;
            }
        }    
        if (m)
        {
            c[n]=ch[i];
            n++;
        }
        
    }
    for(int i=0;i<strlen(c);i++)
    {
        n=0;
        for(int j=0;j<strlen(ch);j++)
        {
            if (ch[j]==c[i])
                n++;
        }    
        printf("%c occured %d times\n", c[i], n);
    }
}
