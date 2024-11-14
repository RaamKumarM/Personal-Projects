// Clockwise

#include <stdio.h>

int main()
{
    printf("\n");
    
    int c,n,s; 
    int a[5]={1,2,3,4,5};
    
    s=sizeof(a)/sizeof(a[0]);
    scanf("%d", &n);
    
    for(int i=0 ; i<n ; i++)
    {
        c=a[s-1];
        for(int i=1 ; i<(s+1) ; i++)
           a[s-i]=a[s-i-1];
        a[0]=c;
    }
    
    for(int i=0 ; i<s ; i++)
        printf("%d", a[i]);
        
    printf("\n");
}
