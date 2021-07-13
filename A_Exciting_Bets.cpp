#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve()
{
    ll a,b;
    cin>>a>>b;
    if(a>b)swap(a,b);
    if(a==b){
        cout<<0<<" "<<0<<endl;
        return;
    }
    cout<<b-a<<" "<<min(b%(b-a),b-a-(b%(b-a)))<<endl;
    

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
