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

void solve()
{
   ll n =in(), d=in();   
   if(n==1){
       if(n==d){
           cout<<1<<endl;return;
       }
       else {
           cout<<0<<endl;return;
       }
   }
   string s = to_string(n);
   ll size = s.length();
   string t = to_string(d);
   if(s.find(t)==string::npos){
       cout<<0<<endl;return;
   }
   if(d == 0){
       ll x = s.find(t);
       if(x==size-1){
           cout<<1<<endl;return;
       }
       string a = string(size-x,'1');
    cout<<a<<endl;return;
   }
   if(d == 9){
       ll a = INT_MAX;
       if(s.find('8')!=string::npos)
       a=s.find('8');
       
       ll b=s.find('9');
       if(a>b){
           if(b==0){
               ll r = pow(10,size);
               cout<<r<<endl;
           }
           if(b==size-1){
               cout<<1<<endl;return;
           }
           else{
               char ch = s[b-1];
               ll r = ch-'0';
               r++;
               ll p = pow(10,size-b);
               r*=p;
               cout<<r-n<<endl;return;
           }
       }
       else{
           
           for(ll i=a;i<b;i++)
           {
               if(s[i]!='8'){
                        char ch = s[b-1];
                        ll r = ch-'0';
                        r++;
                        ll p = pow(10,size-b);
                        ll q = pow(10,size-b+1);
                        r*=p;
                        // cout<<r<<endl;
                        ll a = n%q;
                        cout<<r-a<<endl;return;
               }
           }
           if(a==0){
               ll r = pow(10,size);
               cout<<r-n<<endl;
           }
           else{
               char ch = s[a-1];
               ll r = ch-'0';
               r++;
               ll p = pow(10,size-a);
               r*=p;
               cout<<r-n<<endl;return;
           }
       }
    //    cout<<"OK"<<endl;
   }
   else{       
       ll x  = s.find(t);
       if(x==size-1){
           cout<<1<<endl;return;
       }
       ll a = size-x;
       ll b =pow(10,(a-1));
    //    cout<<b<<endl;
       ll d = n%b;
    //    cout<<d<<endl;
       cout<<b-d<<endl;
   }

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