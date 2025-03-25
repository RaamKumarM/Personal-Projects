#include <stdio.h>

int Print(int * x, int n)
{
    for(int i=0 ; i<n ; i++)
    printf("%d ", x[i]);
    printf("\n");
}

int main()
{
    int a[5]={7,6,5,4,3};
    int y,n;
    n=sizeof(a)/sizeof(a[0]);
    Print(a,n);
    for (int i=0 ; i<(n-1) ; i++)
    {
        for (int j=0 ; j<(n-1) ; j++)
        {
            if (a[j]>a[j+1])
            {
                y=a[j];
                a[j]=a[j+1];
                a[j+1]=y;
                Print(a,n);
            }
        }
    }
}
