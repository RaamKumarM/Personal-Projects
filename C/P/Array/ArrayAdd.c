#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,9};
    int sum;
    for(int i=0 ; i<sizeof(a)/sizeof(a[0]) ; i++)
        sum+=a[i];
    printf("Sum : %d ", sum);
    
    printf("\n");
}
