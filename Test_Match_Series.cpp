#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

    
#define int long long
#define ld long double
#define endl '\n'
#define MOD 1000000007
const int mod=1e9+7;

#define I =in()
#define S =sin()
#define C =chin()

#define rep(i,a,b)        for(int i=a;i<b;i++)
#define fill                for(auto &x:arr) x I;
#define vi                vector<int>
#define vii               vector<pii>
#define A               arr(n)
#define  B               brr(n)

inline int in(){int x;cin >> x;return x;}inline string sin(){string x;cin >> x;return x;}inline char chin(){char x;cin >> x;return x;}inline int In(){int x;cin >> x;return x;}
int gcd(int a, int b){if (a == 0)return b;return gcd(b % a, a);}
// =======================================================================================================
// int factorial(int n ){return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;}
// bool isPrime(int n){if (n <= 1)return false;for (int i = 2; i < n; i++)if (n % i == 0)return false;return true;}
// bool isPalin(string s){string t = s;reverse(s.begin(),s.end());return s==t;}
// bool isPowOfTwo(int n){int y = log2(n);return (pow(2, y) == n);}
// bool isPerfectSq(double n){double y = sqrt(n);return abs(y * y - n) < -1000000007;}
// bool arraySortedOrNot(int arr[], int n){if (n == 0 || n == 1)return true;for (int i = 1; i < n; i++)if (arr[i - 1] > arr[i])return false;return true;}
// =======================================================================================================
void solve()
{
     vi arr(5);
     int a =0;
     int b =0;
     int c =0;
     for(int i =0;i<5;i++){
         cin>>arr[i];
         if(arr[i]==0)a++;
         else if(arr[i]==1)b++;
         else c++;
     }
    //  cout<<s<<endl;
     
     if(b==c){
         cout<<"DRAW"<<endl;return;
     }
     if(b>c){
         cout<<"INDIA"<<endl;return;
     }
     cout<<"ENGLAND"<<endl;return;
}



signed main(){
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
// =======================================================================================================

