#include <iostream>

using namespace std;

int main()
{
    int wybór;
    int kwa;
    int pole;
    cout << "Oblicz Pole: 1.Kwadrat 2.Trapez 3.Romb 4.Trójkąt"<<endl;
    cin >> wybór;
    if (wybór==1)
    {
        cout << "Podaj wymiary kwadratu:"<<endl;
            cin >> kwa;
            pole = kwa * kwa;
                cout <<pole<< endl;
    }
    else if (wybór==2)
    {

    }
    else if (wybór==3)
    {

    }
    else if (wybór==4)
    {

    }
    return 0;
}
