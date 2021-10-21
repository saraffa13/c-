#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
const ll N = 1'000'000'000'000L;

unordered_set<ll> cubes;

void precalc() {
  for (ll i = 1; i * i * i <= N; i++) {
    cubes.insert(i * i * i);
  }
}


// bool perfectCubeRoot(ll x){
//     if(x==0)
//         return false;
//     ll d = pow(x,1.0/3);
//     return d*d*d==x;
// }
void solve()
{
    ll n;
    cin>>n;
    for(ll i=1;(i*i*i)<n;i++)
    {
        if(cubes.count(n-i*i*i))
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
}


int main()
{
    IOS;
    precalc();
    ll t;
    cin >> t;
    while (t--)
        solve();
    // cout<<perfectCubeRoot(27);
    return 0;
}
