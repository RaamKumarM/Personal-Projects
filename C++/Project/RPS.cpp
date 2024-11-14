#include <iostream>
using namespace std;
int System() { return (rand() % 3 + 1); }
void Choice(int n) { (n==1)?(cout << "Rock\n"):(n==2)?(cout << "Paper\n"):(cout << "Scissor\n"); }

int main()
{
    system("clear");
    int lb[2]={0,0};
    char c;     cout << "Start(y/n)? ";     cin >> c;
    while (c=='y'){
        system("clear");
        for(int i=0 ; i<10 ; i++){
            int n,m;
            cout << "\nRock Paper Scissor\n" << endl;
            cout << "1.Rock 2.Paper 3.Scissor 0.Exit" << endl;
            cout << "Your Choice: ";
            cin >> n;
            if (n==0) { break; }
            else if (i>0) { system("clear"); cout << "Previous" << endl; }
            m=System();

            cout << "\nPlayer : ";    Choice(n);
            cout << "System : ";    Choice(m);
            cout << endl;

            if (n==m) { --i; cout << "Draw!" <<endl;  continue; }
            else if ((n==1)&&(m==2)) { cout << "System Wins!\n"; lb[1]++; }
            else if ((n==2)&&(m==3)) { cout << "System Wins!\n"; lb[1]++; }
            else if ((n==3)&&(m==1)) { cout << "System Wins!\n"; lb[1]++; }
            else if ((n==2)&&(m==1)) { cout << "Player Wins!\n"; lb[0]++; }
            else if ((n==3)&&(m==2)) { cout << "Player Wins!\n"; lb[0]++; }
            else if ((n==1)&&(m==3)) { cout << "Player Wins!\n"; lb[0]++; }
        }
        system("clear");
        cout << "\nSCORE" << endl << "Player : " << lb[0] << endl << "System : " << lb[1] << "\n"; 
        cout << "\nPlay Again(y/n)? ";    cin >> c;
    }
    cout << "Thank You!";
}
