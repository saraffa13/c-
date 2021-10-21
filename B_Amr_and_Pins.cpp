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
inline char chin()
{
    char x;cin>>x;return x;
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
    return abs(y*y-n)<-1000000007;
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

void solve()
{
  ll a=in(),x=in(),y=in(),x2=in(),y2=in();
  ll  p = abs(x-x2);
  ll r = abs(y-y2);
  ll dist =0;
  if(x==x2&&y==y2){cout<<0<<endl;return;}
  if(p!=0){dist+=p*p;}
  if(r!=0){dist+=r*r;}
  if(dist==4*a*a){cout<<"1"<<endl;return;}
  else if(dist<4*a*a){cout<<1<<endl;return;}
  ll div = 4*a*a;
  double q = dist*1.0/div;
  q = sqrt(q);
  cout<<ceil(q)<<endl;

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