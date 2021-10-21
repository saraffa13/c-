#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double


void solve()
{
      ll h,w;
      cin>>h>>w;
      string a="",b="",c="";
      for(ll i=0;i<w;i++){
          if(i%2==0)
          {
              a=a+'1';
               b=b+'0'; 
               
          }
          else {
            a=a+'0';
             b=b+'0'; 
          }
          if(i==0||i==w-1){
              c=c+'1';
          }
          else{
              c=c+'0';
          }
          
      }
      cout<<a<<endl;
      for(ll i=1;i<h;i++){
          if(i%2==1){              
              cout<<b<<endl;
          }
          
          else  {
              if(i==h-2){
                  cout<<b<<endl;
                  cout<<a<<endl;
                  break;
              }
              if(i==h-1||i==0){
                  cout<<a<<endl;
              }
              else{
              cout<<c<<endl;
              }
          }
      }
      
      cout<<endl;

}

int main()
{
    ll t ;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
