#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
#define  MOD 1000000007 


bool isPowOfTwo(ll n)
{
    ll y = log2(n);
    return (pow(2, y) == n);
}


void solve()
{
   ll x ;
   cin>>x;
   if(x == 0){
       cout<<1<<endl;
       return;
   }
   if(x == 1){
       cout<<2<<endl;
       return;
   }
   ll r = log2(x);
   if(isPowOfTwo(x)){
       cout<<x<<endl;return;
   }
   ll a = pow(2,r+1);
   if(a-1==x){
       cout<<a<<endl;
       return;
   }   
   ll y = pow(2,r);
   cout<<y<<endl;
}

// =======================================================================================================


int main()
{
    IOS;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// =======================================================================================================