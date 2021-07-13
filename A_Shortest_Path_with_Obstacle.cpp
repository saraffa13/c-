#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
void solve()
{
   ll xa,ya,xb,yb,xf,yf;
   cin>>xa>>ya>>xb>>yb>>xf>>yf;
   if(xa==xb&&xb==xf){
       if(ya>yf&&yb>yf||ya<yf&&yb<yf)
            cout<<abs(yb-ya)<<endl;
        else    
        cout<<abs(ya-yb)+2<<endl;
   }
   else if(ya==yb&&yb==yf){
       if(xa>xf&&xb>xf||xa<xf&&xb<xf)
            cout<<abs(xb-xa)<<endl;
       else
             cout<<abs(xa-xb)+2<<endl;
   }
   else{
       cout<<abs(ya-yb)+abs(xa-xb)<<endl;
   }
   
}


int main()
{
    IOS;
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
