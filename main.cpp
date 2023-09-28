#include <iostream>

using namespace std;

int main()
{
    int l;
    int x;
    int y;
    int dd;
    int oo;
    int dz;
    int mn;
    cout<<"1 dodawanie, 2 odejmowanie, 3 mnożenie, 4 dzielenie"<<endl;
    cin>>l;
    cout<<"Podaj 1 liczbę:"<<endl;
    cin>>x;
    cout<<"Podaj 2 liczbę:"<<endl;
    cin>>y;
    if(l==1)
    {
        dd = x+y;
        cout<<dd<<endl;
    }
 else if(l==2){
     oo = x - y;
     cout<<oo<<endl;
 }
 else if(l==3){
     mn = x*y;
     cout<<mn<<endl;
 }
 else if(l==4)
 {
     dz = x/y;
     cout<<dz<<endl;
 }
    return 0;
}