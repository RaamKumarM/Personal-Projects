#include <iostream>
#include <math.h>
using namespace std;

int _random_() { return (rand() % 10 + 1); }

int main()
{
    system("clear");
    int bet,bet1,r,p;
    cout << "GAMBLING\n" << endl;
    cout << "How much money to bet? $";
    cin  >> bet;
    bet1=bet;
    system("cls");
    for(int i=0 ; i<11 ; i++){
        r=_random_();
        cout << "Bet Money : $" << bet;
        cout << "\nGuess the number : ";   cin >> p;
        if (r==p) { cout << "You Won\n"; bet=fabs(bet)*10; }
        else if (i==0) { cout << "You Lost all Money!\n"; bet=0; }
        else { cout << "You Lost!\n"; bet=bet-bet1; }
        cout << endl;
    }
    system("cls");
    
    cout << "Your Money : $" << bet << endl;
    if (bet>bet1) { cout << "You have PROFITED!!!\n"; }
    else if (bet<0) { cout << "You have Lost. But Worry Not! There is always a next Time!!!\n"; }
    else { cout << "You have gain nothing, But, You haven't Lost anything. So Fret not!!!\n"; }
}
