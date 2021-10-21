#include <bits/stdc++.h>
// =======================================================================================================
using namespace std;
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
#define MOD 1000000007

// =======================================================================================================
const int N = 1e5 + 1;
// =======================================================================================================
inline ll in()
{
    ll x;
    cin >> x;
    return x;
}
inline string sin()
{
    string x;
    cin >> x;
    return x;
}
inline char chin()
{
    char x;
    cin >> x;
    return x;
}
inline int In()
{
    int x;
    cin >> x;
    return x;
}
// =======================================================================================================

bool max(ll x, ll y, ll z = LONG_LONG_MIN, ll w = LONG_LONG_MIN)
{
    return max(x, max(y, max(z, w)));
}
bool min4(ll x, ll y, ll z = LONG_LONG_MAX, ll w = LONG_LONG_MAX)
{
    return min(x, min(y, min(z, w)));
}

// =======================================================================================================
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
// =======================================================================================================
// bool isPrime(ll n)
// {
//     if (n <= 1)
//         return false;
//     for (ll i = 2; i < n; i++)
//         if (n % i == 0)
//             return false;
//     return true;
// }
// bool isPallin(string s)
// {
//     string t = s;
//     reverse(s.begin(),s.end());
//     return s==t;
// }
// bool isPowOfTwo(ll n)
// {
//     ll y = log2(n);
//     return (pow(2, y) == n);
// }
bool isPerfectSq(double n)
{
    double y = sqrt(n);
    return abs(y * y - n) < -1000000007;
}
// =======================================================================================================
// bool arraySortedOrNot(ll arr[], ll n)
// {
//     // Array has one or no element
//     if (n == 0 || n == 1)
//         return true;

//     for (ll i = 1; i < n; i++)

//         // Unsorted pair found
//         if (arr[i - 1] > arr[i])
//             return false;

//     // No unsorted pair found
//     return true;
// }

// =======================================================================================================
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void solve()
{
    ll a =in(),b=in(),sum=0;
    while(b>0){
        ll x  = log2(b);
        b = b-(pow(2,x));
        ll r = binpow(a,x,MOD);
        sum = (sum %MOD+ r%MOD)%MOD;
        // sum = sum % MOD;
    }
    cout<<sum<<endl;
}

// =======================================================================================================

int main()
{
    IOS;
    ll t ;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// =======================================================================================================