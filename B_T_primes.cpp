#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// #define end \n
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
// ============================================================================================================================================================================
bool isPerfectSq(ll n)
{
    ll s = sqrt(n);

    return (s * s == n);
}
// ============================================================================================================================================================================
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define min3(a, b, c) min(a, min(b, c))
#define min5(a, b, c, d, e) min(a, min(b, min(c, min(d, e))))
// ============================================================================================================================================================================
const int N = 1e5 + 1;
// ============================================================================================================================================================================
ll in()
{
    ll x;
    cin >> x;
    return x;
}
int In()
{
    int x;
    cin >> x;
    return x;
}
// ============================================================================================================================================================================
unordered_set<string>s;
void SieveOfEratosthenes(ll n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            s.insert(to_string(p*p));
}
// ============================================================================================================================================================================
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
// ============================================================================================================================================================================
void init(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void Init(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
// ============================================================================================================================================================================

void solve()
{
    SieveOfEratosthenes(1000000);
    ll n = in();
    ll arr[n];
    init(arr, n);
    for (ll i = 0; i < n; i++)
    {
        if(s.find(to_string(arr[i]))!=s.end())
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

// ============================================================================================================================================================================

int32_t main()
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

// ============================================================================================================================================================================