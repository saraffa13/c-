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
    ll n = in(),s1=0,s2=0,prev1=0,prev2=0,moves=0;
    vector<ll>arr(n);
    for(auto &x:arr) x=in();
    while(arr.size()>0){
        ll k=0;
        while(s1<=prev2&&arr.size()>0){
            s1+=arr[0];
            prev1+=arr[0];
            arr.erase(arr.begin());
            k++;
        }   
        if(k>0)  {   
            prev2=0;
            moves++;
            k=0;
        }
        while(s2<=prev1&&arr.size()>0){
            // moves++;
            s2+=arr[arr.size()-1];
            prev2+=arr[arr.size()-1];
            arr.pop_back();
            k++;
        }
        if(k>0)  {   
            prev1=0;
            moves++;
            k=0;
        }
    }
    cout<<moves<<" ";
    cout<<s1<<" "<<s2<<endl;

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