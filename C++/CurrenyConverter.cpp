#include <iostream>

float Inr=1.00;
float USD=0.01;
float Yen=1.84;
float Yuan=0.09;
float Pound=0.0093;
float Euro=0.01;
float Rand=0.22;
float Won=16.54;

void Change(int x, int y){
    float f,t;
    cout << "Currency : ";
    cin >> f;
    
}

int main()
{
    int From, To;
    cout << "Currency Converter" << endl;
    cout << "1.Inr\n2.USD\n3.Yen\n4.Yuan\n5.Pound\n6.Euro\n7.Rand\n8.Won\n";
    cout << "From : ";
    cin >> From;
    cout << endl << "To   : ";
    cin >> To;
    Change(From,To);
}
