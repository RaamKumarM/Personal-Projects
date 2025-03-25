#include <stdio.h>
int main()
{
    int a[]={1,2,0,4,5};
    int n,m;
    printf("Number: ");
    scanf("%d", &n);
    printf("Where to insert: ");
    scanf("%d", &m);
    a[m-1]=n;
    for(int i=0 ; i<sizeof(a)/sizeof(a[0]) ; i++)
    printf("%d", a[i]);
    
    printf("\n");
}
