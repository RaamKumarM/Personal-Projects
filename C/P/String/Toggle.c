#include <stdio.h>
int main()
{
    char ch[20]="HeLlO WorLd";
    for (int i=0;i<sizeof(ch);i++)
    {
        if ((ch[i]>='a')&&(ch[i]<='z'))
            ch[i]=ch[i]-32;
        else if ((ch[i]>='A')&&(ch[i]<='Z'))
            ch[i]=ch[i]+32;
    }
    printf("%s", ch);
}
