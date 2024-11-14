#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int check(char ch[], int n)
{
    if (ch[n]=='0')
        return 0;
    return 1;
}

int Check(char k[])
{
    int n=9;
    for(int i=0;i<9;i++)
        if (k[i]!=0)
            n--;
    if(!n)
        return 0;
    
    if (((k[0]==k[1])&&(k[1]==k[2]))&&(k[2]!=0))
        return 0;
    else if (((k[3]==k[4])&&(k[4]==k[5]))&&(k[5]!=0))
        return 0;
    else if (((k[6]==k[7])&&(k[7]==k[8]))&&(k[8]!=0))
        return 0;
    else if (((k[0]==k[3])&&(k[3]==k[6]))&&(k[6]!=0))
        return 0;
    else if (((k[1]==k[4])&&(k[4]==k[7]))&&(k[7]!=0))
        return 0;
    else if (((k[2]==k[5])&&(k[5]==k[8]))&&(k[8]!=0))
        return 0;
    else if (((k[0]==k[4])&&(k[4]==k[8]))&&(k[8]!=0))
        return 0;
    else if (((k[6]==k[4])&&(k[4]==k[2]))&&(k[2]!=0))
        return 0;
    else
        return 1;
}

int random1(char k[])
{
    int r, w=1;
    srand(time(NULL));
    while(Check(k)&&w)
    {
        r=rand() % 9 ;
        w=check(k,r);
    }
    return r;
}


int Change(char ch[9], int n, char str)
{
    if ((n==0)&&(ch[n]!=0))
        ch[n]=str;
    else if ((n==1)&&(ch[n]!=0))
        ch[n]=str;
    else if ((n==2)&&(ch[n]!=0))
        ch[n]=str;
    else if ((n==3)&&(ch[n]!=0))
        ch[n]=str;
    else if ((n==4)&&(ch[n]!=0))
        ch[n]=str;
    else if ((n==5)&&(ch[n]!=0))
        ch[n]=str;
    else if ((n==6)&&(ch[n]!=0))
        ch[n]=str;
    else if ((n==7)&&(ch[n]!=0))
        ch[n]=str;
    else if ((n==8)&&(ch[n]!=0))
        ch[n]=str;
    else 
    {
        printf("Invalid!\n");
        scanf("%d", &n);
        Change(ch, n, str);
    }
}

int Print(char ch[9])
{
    printf("-------------------\n");
    printf("|  %c  |  %c  |  %c  |\n", ch[0],ch[1],ch[2]);
    printf("-------------------\n");
    printf("|  %c  |  %c  |  %c  |\n", ch[3],ch[4],ch[5]);
    printf("-------------------\n");
    printf("|  %c  |  %c  |  %c  |\n", ch[6],ch[7],ch[8]);
    printf("-------------------\n");
}

int T3()
{
    system("clear");
    char c1, c2;
    printf("Choose Between X and O : ");
    scanf("%c", &c1);
    c1=(c1=='x') ? 'X' : (c1=='o') ? 'O' : c1 ;
    c2=(c1=='X') ? 'O' : 'X';


    system("clear");
    
    int no;
    char ch[9];
    Print(ch);
    while(Check(ch))
    {
        printf("Your Choice: ");
        scanf("%d", no);
        Change(ch, no, c1);
        
        random1(ch);
        Change(ch, no, c2);
        system("clear");
        Print(ch);
    }
}

int main()
{
    printf("    Tic-Tac-Toe\n");
    printf("-------------------\n");
    printf("|     |     |     |\n");
    printf("-------------------\n");
    printf("|     |     |     |\n");
    printf("-------------------\n");
    printf("|     |     |     |\n");
    printf("-------------------\n");
    int Start;
    printf("Start(1)/Quit(0): ");
    scanf("%d", &Start);

    if (Start)
        T3();
    else
        system("clear");
}
