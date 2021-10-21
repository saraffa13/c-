#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ld long double

bool prime (ll n)
{
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
void solve()
{
    ll d;
    cin>>d;
    
    ll e;
    ll f;
    for(ll i=1+d;;i++)
    {
        if(prime(i))
        {
            e=i;
            break;
        }
    }
    for(ll i=d+e;;i++)
    {
        if(prime(i))
        {
            f=i;
            break;
        }
    }

    cout<<e*f<<endl;

}

int main()
{
    ll t ;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
