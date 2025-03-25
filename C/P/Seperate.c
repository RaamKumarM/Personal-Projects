#include <stdio.h>

int main()
{
    int a[]={10,20,-10,30,-20,40,-30,50,60};
    int First=0, Last=sizeof(a)/sizeof(a[0])-1, temp=0;
    while(1)
    {
        if (a[First]<0)
        {
            temp=a[First];
            a[First]=a[Last];
            a[Last]=temp;
            Last--;
        }
        if (First>=Last)
            break;
        First++;
    }
    for (int i=0 ; i<9 ; i++)
        printf("%d ", a[i]);
        
    printf("\n");
}
