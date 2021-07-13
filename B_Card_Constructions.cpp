#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
ll check(ll n){
    return (2*n+3*n*(n-1)/2);
}
void solve()
{
    ll n,res=0;
    cin>>n;
    if(n<2){cout<<0<<endl;return;}
    for(ll i=1;n>1&&i<n;i++){
        if(check(i)>n)
        {
            n=n-check(i-1);
            cout<<n<<","<<endl;
            res++;
            cout<<res<<endl;
            i=1;
        }
        else if(check(i)==n){  
            res++;
            cout<<res<<endl;
            break;
        }
    }
    cout<<res<<endl;

}

int main()
{
    IOS;
    ll t ;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
