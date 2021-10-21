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
bool isPallin(string s)
{
    string t = s;
    reverse(s.begin(), s.end());
    return s == t;
}
// =======================================================================================================
bool arraySortedOrNot(ll arr[], ll n)
{
    // Array has one or no element
    if (n == 0 || n == 1)
        return true;

    for (ll i = 1; i < n; i++)

        // Unsorted pair found
        if (arr[i - 1] > arr[i])
            return false;

    // No unsorted pair found
    return true;
}
void swapC(char &a, char &b)
{
    char c = a;
    a = b;
    b = c;
}

bool check(string s)
{
    sort(s.begin(), s.end());
    for (ll i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
            return false;
    }
    return true;
}

// void toggleadjacent(vector<<vector<ll>>*arr,ll i,ll j){

// }
ll countCap(string s,ll n){
    ll cap =0;
    for( ll i=0;i<n;i++){
        if(s[i]>='A'&&s[i]<='Z')
        cap++;
    }
    return cap;
}
// =======================================================================================================

void solve()
{
    ll n = in(),c =0;
   string s = sin();
//    ll n =s.length(),c=0;
   for( ll i=0;i<n-1;i++){
       if(s[i]==s[i+1])c++;
   }
//    if(s[n-1]==s[n-2])c++;
   cout<<c<<endl;return;
}
//===============================================================================

int main()
{
    IOS;
    ll t =1 ;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// =======================================================================================================