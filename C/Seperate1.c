#include <stdio.h>

int swap(int *a, int x, int y)
{
    int t;
    t=a[x];
    a[x]=a[y];
    a[y]=t;
}
int main()
{
    int a[]={10,-1,-2,20,-30,-5};
    
    int n=sizeof(a)/sizeof(a[0]);
    int w=0;
    
    for(int i=0 ; i<n ; i++)
        if (a[i]<0)
            w++;
    
    for(int i=0 ; i<w ; i++)
        if (a[i]>0)
            for (int j=w ; j<n ; j++)
                if (a[j]<0)
                    swap(a,i,j);
    for(int i=0 ; i<6 ; i++)
        printf("%d ", a[i]);
        
        
    printf("\n");
}
