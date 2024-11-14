// Duplicate
#include <stdio.h>

int main()
{
    int a[5];
    
    for (int i=0 ; i<5 ; i++)
        scanf("%d", &a[i]);
        
    int n=sizeof(a)/sizeof(a[0]);
    int c=1;
    printf("Duplicate:");
    
    for (int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if (a[i]==a[j])
            {    
                c=0;
                printf(" %d,",a[i]);
            }
        }
    }
    
    if (c)
        printf(" None");
        
    
    printf("\n");
}
