#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>
#include "Check.c"

int randon(int a[4][4])
{
    int r1,r2;
    srand(time(NULL));
    while(1)
    {
        r1=rand() % 4 ;
        r2=rand() % 4 ;
        if (a[r1][r2]==0)
        {
            a[r1][r2]=2;
            break;
        }
    }
}

int Check(int a[4][4])
{
    for(int i=0 ; i<4 ; i++)
        for(int j=0 ; j<4 ; j++)
            if (a[i][j]==0)
                return 1;
    return 0;
}

int Print(int a[4][4])
{
    printf("|-----------------------|\n");
    printf("|  %d  |  %d  |  %d  |  %d  |\n", a[0][0], a[0][1], a[0][2], a[0][3]);
    printf("|-----------------------|\n");
    printf("|  %d  |  %d  |  %d  |  %d  |\n", a[1][0], a[1][1], a[1][2], a[1][3]);
    printf("|-----------------------|\n");
    printf("|  %d  |  %d  |  %d  |  %d  |\n", a[2][0], a[2][1], a[2][2], a[2][3]);
    printf("|-----------------------|\n");
    printf("|  %d  |  %d  |  %d  |  %d  |\n", a[3][0], a[3][1], a[3][2], a[3][3]);
    printf("|-----------------------|\n");
}

int get()
{
    int v;
    initscr();
    cbreak();
    noecho();
    v=getchar();
    echo();
    nocbreak();
    endwin();
    return v;
}

int G2048()
{
    system("clear");
    int d=1;
    int arr[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int Full=Check(arr);
    
    while(Full&&(d!=0))
    {
        randon(arr);
        Print(arr);
        printf("\nChoose: ");
        d=get();
        Change(arr, d-48); 
        Full=Check(arr);
        system("clear");
    }
}

int main()
{
    system("clear");
    int n;
    printf("         2 0 4 8         \n");
    printf("|-----------------------|\n");
    printf("|     |     |     |     |\n");
    printf("|-----------------------|\n");
    printf("|     |     |     |     |\n");
    printf("|-----------------------|\n");
    printf("|     |     |     |     |\n");
    printf("|-----------------------|\n");
    printf("|     |     |     |     |\n");
    printf("|-----------------------|\n");
    printf("\nStart(1)/Quit(0) : ");
    
    scanf("%d", &n);
    system("clear");
    
    if (n)
        G2048();
    system("clear");
}
