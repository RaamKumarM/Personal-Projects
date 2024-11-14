#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int h,m,s;
    int d=1000;
    printf("Set time: \n");
    scanf("%d", &h);
    scanf("%d", &m);
    scanf("%d", &s);
    printf("%02d:%02d:%02d\n",h,m,s);
    sleep(1);
    while(1)
    {
        system("clear");
        s++;
        if (s==60)
        {
            s=0;
            m++;
        }
        if (m==60)
        {
            m=0;
            h++;
        }
        if (h==13)
        {
            h=1;
        }
        printf("%02d:%02d:%02d\n",h,m,s);
        sleep(1);
    }
}
