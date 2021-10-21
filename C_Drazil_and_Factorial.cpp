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
// ll gcd(ll a, ll b)
// {
//     if (a == 0)
//         return b;
//     return gcd(b % a, a);
// }
// =======================================================================================================


// bool isPallin(string s)
// {    
//     string t = s;
//     reverse(s.begin(),s.end());
//     return s==t;
// }
// bool isPrime(ll n)
// {
//     // Corner cases
//     if (n <= 1)
//         return false;
//     if (n <= 3)
//         return true;
  
//     // This is checked so that we can skip
//     // middle five numbers in below loop
//     if (n % 2 == 0 || n % 3 == 0)
//         return false;
  
//     for (int i = 5; i * i <= n; i = i + 6)
//         if (n % i == 0 || n % (i + 2) == 0)
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
//     return true;
// }


// =======================================================================================================

void solve()
{
   ll n =in();
   ll a = in();
   string s = to_string(a);
   string t="";
   for(ll i=0;i<n;i++){
       if(s[i]=='2'){
           t+='2';
       }
       else if(s[i]=='3'){
           t+='3';
       }
       else if(s[i]=='4'){
           t+="322";
       }
       else if(s[i]=='5'){
           t+='5';
       }
       else if(s[i]=='6'){
           t+="53";
       }
       else if(s[i]=='7'){
           t+='7';
       }
       else if(s[i]=='8'){
           t+="7222";
       }
       else if(s[i]=='9'){
           t+="7332";
       }
   }
   sort(t.rbegin(),t.rend());
   cout<<t<<endl;

}
//===============================================================================


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