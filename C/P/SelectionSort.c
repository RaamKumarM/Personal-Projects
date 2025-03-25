#include <stdio.h>

int swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=*a;
}

int identify(int *a)
{
    int m=a[0],n=0;
    for (int i=0, i<n ; i++)
        if (a[i]<m)
        {
            m=a[i];
            n=i;
        }
    return n;
}

int main()
{
    int a[5]={3,6,4,8,2};
    int c=sizeof(a)/sizeof(a[0]);
    int t,n;
    for (int i=0 ; i<c ; i++)
    {
        n=identify(a);
        t=a[i];
        a[i]=a[n]
        

    }
}
