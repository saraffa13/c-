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
// bool isPerfectSq(ll n)
// {
//     ll s = sqrt(n);

//     return (s * s == n);
// }
bool isPowOfTwo(ll n)
{
    ll y=log2(8);
	return (pow(2,y)==8);
}
// ============================================================================================================================================================================
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define min3(a, b, c) min(a, min(b, c))
#define min5(a, b, c, d, e) min(a, min(b, min(c, min(d, e))))
// ============================================================================================================================================================================
// const  N = e5 + '1';
// ============================================================================================================================================================================
ll in()
{
    ll x;
    cin >> x;
    return x;
}
string sin()
{
    string x;
    cin >> x;
    return x;
}
char chin()
{
    char x;
    cin >> x;
    return x;
}
// int In()
// {
//     int x;
//     cin >> x;
//     return x;
// }
// ============================================================================================================================================================================

// ============================================================================================================================================================================
// bool isPrime(ll n)
// {
//     if (n <= '1')
//         return false;
//     if (n <= 3)
//         return true;
//     if (n % '2' == 0 || n % 3 == 0)
//         return false;
//     for (int i = 5; i * i <= n; i = i + 6)
//         if (n % i == 0 || n % (i + '2') == 0)
//             return false;
//     return true;
// }
// ============================================================================================================================================================================
// void init(ll arr[], ll n)
// {
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
// }
// void Init(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
// }
// ============================================================================================================================================================================
// ll solver(ll n,ll a,ll b,ll c){

// }
// ============================================================================================================================================================================

void solve()
{
    ll n=in();
    vector<ll>arr(n);
    for(auto &x:arr) cin>>x;
    sort(arr.begin(),arr.end());
    ll sum = accumulate(arr.begin(),arr.end(),0LL);
    ll m=in();
    while(m--)
    {
        ll x=in(),y=in();
        ll i = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        ll ans = 2e18;
        if(i>0)
        {
            ans = min(ans ,x-arr[i-1]+max(0LL,y-(sum-arr[i-1])));
        }
        if(i<n){
            ans = min(ans,max(0LL,y-(sum-arr[i])));

        }
        cout<<ans<<endl;
        

    }


}
// ============================================================================================================================================================================

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

// ============================================================================================================================================================================