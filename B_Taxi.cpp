#include<bits/stdc++.h>
// =======================================================================================================
using namespace std;
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
// #define S sin()
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
    reverse(s.begin(),s.end());
    return s==t;
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
// =======================================================================================================

void solve()
{
    ll n=in();
    vector<ll>arr(n);
    ll a=0,b=0,c=0,d=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)a++;
        else if(arr[i]==2)b++;
        else if(arr[i]==3)c++;
        else d++;
    }
    // cout<<a<<" "<<b<<endl;
    ll ans = 0;
    ans += d;
    ans=ans+min(a,c);
    if(c==a){a=0;c=0;}
    else if(c>a){
        c=c-a;
        a=0;
    }
    else{
        a =a-c;
        c=0;
    }
    ans +=c;
    ll finalans=a+(b*2);
    // cout<<finalans<<endl;
    if(finalans%4==0){
        ans =ans+finalans/4;
    }
    else{
        ans =ans+finalans/4;
        ans++;
    }
    cout<<ans<<endl;
}

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