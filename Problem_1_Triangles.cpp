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

// =======================================================================================================
// ll gcd(ll a, ll b)
// {
//     if (a == 0)
//         return b;
//     return gcd(b % a, a);
// }
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
// bool isPerfectSq(double n)
// {
//     double y = sqrt(n);
//     return abs(y * y - n) < -1000000007;
// }
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

bool checkRightAngled(ll X1, ll Y1,
                      ll X2, ll Y2,
                      ll X3, ll Y3,double &area)
{
    ll A = (ll)pow((X2 - X1), 2)
            + (ll)pow((Y2 - Y1), 2);
 
    ll B = (ll)pow((X3 - X2), 2)
            + (ll)pow((Y3 - Y2), 2);
 
    ll C = (ll)pow((X3 - X1), 2)
            + (ll)pow((Y3 - Y1), 2);
    if(A==(B+C)){
        area = sqrt(B)*sqrt(C);return true;
    }
    else if(B==(A+C)){
        area = sqrt(A)*sqrt(C);return true;
    }
    else if(C==(B+A)){
        area = sqrt(B)*sqrt(A);return true;
    }
    area =0;
    return false ;
}

void solve()
{
    freopen("triangles.in","r",stdin);
    freopen("triangles.out","w",stdout);
    ll n = in() ;
    double ans = 0;
    vector<ll>arr(n),brr(n);
    for(ll i = 0 ;i<n;i++){
        arr[i]=in();brr[i]=in();
    }
    for(ll i =0;i<n;i++){
        for( ll j =i+1;j<n;j++){
            for (ll k=j+1;k<n;k++)
            {
                bool ok = false;
                double area = 0.0;
                ok = checkRightAngled(arr[i],brr[i],arr[j],brr[j],arr[k],brr[k],area);
                ans = max(area, ans);
            }
        }
    }
    cout<<ans<<endl;
}

// =======================================================================================================

int main()
{
    IOS;
    ll t =1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// =======================================================================================================