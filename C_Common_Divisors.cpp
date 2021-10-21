#include<bits/stdc++.h>
// =======================================================================================================
using namespace std;
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
#define  MOD 1000000007 

// =======================================================================================================
const int N  = 1e5 +1;
// =======================================================================================================
inline ll in()
{
    ll x;cin>>x;return x;
}
inline string sin()
{
    string x;cin>>x;return x;
}
inline int In()
{
    int x;cin>>x;return x;
}
// =======================================================================================================

bool max(ll x,ll y,ll z=LONG_LONG_MIN, ll w=LONG_LONG_MIN){
    return max(x,max(y,max(z,w)));
}
bool min4(ll x,ll y,ll z=LONG_LONG_MAX, ll w=LONG_LONG_MAX){
    return min(x,min(y,min(z,w)));
}

// =======================================================================================================
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
// =======================================================================================================
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i < n; i++)
        if (n % i == 0)
            return false;  
    return true;
}
bool isPallin(string s)
{    
    string t = s;
    reverse(s.begin(),s.end());
    return s==t;
}
// =======================================================================================================
unordered_set<ll>prime [1000000 + 1];
void SieveOfEratosthenes()
{
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= 1000001; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= 1000001; i += p)
                prime[i] = false;
        }
    }
}
 
// =======================================================================================================
bool arraySortedOrNot(ll arr[], ll n)
{
    if (n == 0 || n == 1)
        return true;
    for (ll i = 1; i < n; i++)
        if (arr[i - 1] > arr[i])
            return false;
    return true;
}
// =======================================================================================================
void solve();
// =======================================================================================================
int main()
{
    IOS;
    ll t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// =======================================================================================================
void solve(){
    ll n;
    ll arr[n],p=0,m=LONG_LONG_MAX;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(ll i=1;i<n;i++)
    {
        ll d = abs(arr[i]-arr[i-1]);
        
    }

}