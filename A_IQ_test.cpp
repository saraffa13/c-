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
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define min3(a, b, c) min(a, min(b, c))
#define min5(a,b,c,d,e) min(a,min(b,min(c,min(d,e))))
// ============================================================================================================================================================================
const int N  = 1e5 +1;
// ============================================================================================================================================================================
ll in()
{
    ll x;cin>>x;return x;
}
int In()
{
    int x;cin>>x;return x;
}
// ============================================================================================================================================================================
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i < n; i++)
        if (n % i == 0)
            return false;  
    return true;
}
// ============================================================================================================================================================================
void init(ll arr[],ll n)
{
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
// ============================================================================================================================================================================

void solve()
{
   ll n;
   cin>>n;
   ll arr[n];
   init(arr,n);
   ll ee=0,oo=0;
   if(arr[0]&1){
       oo++;
   }
   else{
       ee++;
   }
   if(arr[1]&1){
       oo++;
   }
   else{
       ee++;
   }
   if(arr[2]&1){
       oo++;
   }
   else{
       ee++;
   }
   if(ee>oo){
       for(ll i=0;i<n;i++)
       {
           if(arr[i]&1)
           {
               cout<<i+1<<endl;
               return;
           }
       }
   }
   else{
       for(ll i=0;i<n;i++)
       {
           if(!(arr[i]&1))
           {
               cout<<i+1<<endl;
               return;
           }
       }
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