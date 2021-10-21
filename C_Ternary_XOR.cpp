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
    string s = sin();
    ll c =0,i=0,n=s.length(),k=0;
    bool check = s.find('1')!=string::npos;
    string a="",b="";
    while(s[c++]=='2'){
        a = a+'1';
        b = b+'1';
        i =c;
    }
    for( ll i=0;i<n;i++ ){
        if(s[i]=='0'){
            if(i==0){
                a =a +'2';
                b=b+'1';
                k++;
            }
            else if(k==0&&check==false){
                a = a + '2';
                b = b + '1';
                k++;
            }
            else if(check==true){
                a = a + '0';
                b = b + '0';
                k++;
            }
        }
        else if(s[i]=='1'){
            if(k==0){
                a = a + '1';
                b = b + '0';
                k++;
            }
            else{
                a = a + '0';
                b = b + '1';
            }
        }
        else if(s[i]=='2'){
            a = a+'0';
            b = b+'2';
        }
    }
    cout<<a<<endl<<b<<endl;


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