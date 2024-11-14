#include <stdio.h>
int main()
{
    int a[]={4,14,24,34,44};
    int b[]={6,16,26,36,46};
    int c[]={9,19,29,39,49};
    
    int *p[3], **ptr,i;
    p[0]=a;
    p[1]=b;
    p[2]=c;
    ptr=p;
    for(i=1 ; i<=3 ; i++)
    {
        *ptr=*ptr+i;
        **ptr=**ptr+i;
        ++ptr;
    }
    --ptr;
    printf("%d", **ptr);
    printf("\n");
}
