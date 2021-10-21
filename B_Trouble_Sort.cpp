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
// =======================================================================================================
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define min3(a, b, c) min(a, min(b, c))
#define min5(a,b,c,d,e) min(a,min(b,min(c,min(d,e))))
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
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i < n; i++)
        if (n % i == 0)
            return false;  
    return true;
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
    ll arr[n],brr[n],c0=0,c1=0;
    for(ll i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(ll i =0;i<n;i++)
    {
        cin>>brr[i];
        if(brr[i]==0) c0++;
        else c1++;

    }
    if(c0==0||c1==0)
    {
        if(!arraySortedOrNot(arr,n)){
            cout<<"No"<<endl;
            return;

        }

    }
    cout<<"Yes"<<endl;
    return;

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