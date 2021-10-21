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
const int N  = 1e5 +1;
#define MAXN   1000001
// =======================================================================================================
ll in()
{
    ll x;cin>>x;return x;
}
int In()
{
    int x;cin>>x;return x;
}

vector<ll> factorize(long long n)
{
    int count = 0;
    vector<ll>v;
    // count the number of times 2 divides
    while (!(n % 2)) {
        n >>= 1; // equivalent to n=n/2;
        count++;
    }
 
    // if 2 divides it
    if (count)
        // cout << 2 << "  " << count << endl;
         v.push_back(2);
 
    // check for all the possible numbers that can
    // divide it
    for (long long i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
        if (count)
            // cout << i << "  " << count << endl;
            v.push_back(i);
    }
 
    // if n at the end is a prime number.
    if (n > 2)
        // cout << n << "  " << 1 << endl;
        v.push_back(n);

        return v;
}
 

// =======================================================================================================

void solve()
{
   ll a,b;
   cin>>a>>b;
   if(a==1){
    //    if(b==1){
    //        cout<<"YES"<<endl;
    //        return;
    //    }
       cout<<"YES"<<endl;
       return;
       
   }
   if(b==1&&a!=1){
       cout<<"NO"<<endl;
       return;
   }
   vector<ll>arr = factorize(a);
   for(ll i=0;i<arr.size();i++)
   {
       if(b%arr[i]!=0)
       {
           cout<<"NO"<<endl;
           return;
       }
   }
   cout<<"YES"<<endl;
//    vector <ll> p = getFactorization(a);
//    unordered_set <ll> q = getFactorizations(b);
   



}

// =======================================================================================================


int main()
{
    IOS;
    ll t;
    cin >> t;
    // sieve();
    while (t--)
    {
        solve();
    }

    return 0;
}

// =======================================================================================================