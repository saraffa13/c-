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
   ll P=in(),a=in(),b=in(),c=in(),x=in(),y=in(),ans1=INT_MAX,ans2 =INT_MAX;
   for(ll i=0;i<=P;i++)
   {
           ans1=0;
           ans2=0;
       
       for(ll j=0;j<=P;j++){

           ll C = (P - a*i - b*j)/c;
           if(C*c == (P - a*i-b*j) ){
               ll r,s;
               if(j<C){
                   r = i/x;
               }
               ans1=min(r,j);
               i-=ans1;
               if(ans1>0){
                   s = i/C;
               }
               ans2= min(s,C);
               
           }
       }
   }
   cout<<ans1+ans2<<endl;

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