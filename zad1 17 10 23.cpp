#include <iostream>
#include <string>

using namespace std;

int main()
{
    string logi="samuel";
    string haslo="ehj";
    string h,ll;
    int proby=0;
    int mproby=3;
    
    
    while(proby<mproby){
    
   cout<<"Podaj login:"<<endl;
   cin>>ll;
   cout<<"Podaj haslo:"<<endl;
   cin>>h;
   
   if(ll==logi && h==haslo)
   {
      cout<<"Witamy w programie"<<endl;
      break;
   }
   else
   {
       cout<<"Logowanie nieudane"<<endl;
       proby++;
   }
    }
    if(proby==mproby)
    {
        cout<<"Konto zablokowane"<<endl;
    }
   
    

    return 0;
}