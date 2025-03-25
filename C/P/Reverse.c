// Reverse

#include <stdio.h>

int main()
{
    int t;
    int a[18]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int n=sizeof(a)/sizeof(a[0]);
    for (int i=0 ; i<n/2 ; i++)
    {
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    for (int i=0 ; i<n ; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}
