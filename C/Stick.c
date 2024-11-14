#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SystemChoose()
{
    int r;
    srand(time(NULL));
    r=rand() % 4 + 1 ;
    printf("\n  System :  %d\n\n", r);
    return r;
}

int Ask(int a, int * x, int * y)
{
    if (a==1)
        y[0]+=x[0];
    else if (a==2)
        y[1]+=x[0];
    else if (a==3)
        y[0]+=x[1];
    else if (a==4)
        y[1]+=x[1];
    else
        printf("Invalid!!!\n\n");

    for (int i=0 ; i<2 ; i++)
    {
        if (y[i]==5)
            y[i]=0;
        else if (y[i]==6)
            y[i]=2;
        else if (y[i]==7)
            y[i]=3;
        else if (y[i]==8)
            y[i]=4;
    }
}

int Stick1(int * x)
{
    if (x[2])
        printf("  Player :  ");
    else 
        printf("  System :  ");

    for (int i=0 ; i<2 ; i++)
    {
        if (x[i]==1)
            printf("[   |   ]  ");
        else if (x[i]==2)
            printf("[  | |  ]  ");
        else if (x[i]==3)
            printf("[ | | | ]  ");
        else if (x[i]==4)
            printf("[ || || ]  ");
        else if (x[i]==0)
            printf("[       ]  ");
    }
    printf("\n\n");
}

int Stick()
{
    int a;
    int x[3]={1,1,1};
    int y[3]={1,1,0};

    printf("  Player :  [  |  ] [  |  ]\n\n");
    printf("  System :  [  |  ] [  |  ]\n\n");

    while(((x[0]!=0)||(x[1]!=0))&&((y[0]!=0)||(y[1]!=0)))
    {
        printf("  Player :  ");
        scanf("%d", &a);
        Ask(a,x,y);

        a=SystemChoose();
        Ask(a,y,x);
        Stick1(x);
        Stick1(y);

    }

    if ((x[0]==0)&&(x[1]==0))
        printf("You Lose\n");
    else if ((y[0]==0)&&(y[1]==0))
        printf("You Win\n");
}

int main()
{
    printf("Chop Sticks\n\n");
    printf("Instructions:\n\n");
    printf("  0. Switch Between\n");
    printf("  1. Left to Left\n");
    printf("  2. Left to Right\n");
    printf("  3. Right to Left\n");
    printf("  4. Right to Right\n\n");

    Stick();


}