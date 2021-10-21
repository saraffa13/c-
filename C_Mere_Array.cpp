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
// =========================================
// =======================================================================================================
const int N  = 1e5 +1;
// =======================================================================================================
ll in()
{
    ll x;cin>>x;return x;
}
int In()
{
    int x;cin>>x;return x;
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
   ll arr[n],brr[n],m=LONG_LONG_MAX,k=0;
   for(ll i=0;i<n;i++)
    {   
        cin>>arr[i];
        brr[i]=arr[i];
        m = min(m, arr[i]);
    }
    sort(arr,arr+n);
   for(ll i=0;i<n;i++)
    {   
        if((arr[i]!=brr[i]) && (arr[i]%m!=0))
            k++;
    }
    if(k==0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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