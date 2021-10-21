#include <bits/stdc++.h>
// =======================================================================================================
using namespace std;
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define ld long double
#define MOD 1000000007
#define I =in()
#define S =sin()
#define C =chin()

#define nc2 n*(n-1)/2
// =======================================================================================================
const int N = 1e5 + 1;
// =======================================================================================================
inline int in(){int x;cin >> x;return x;}inline string sin(){string x;cin >> x;return x;}inline char chin(){char x;cin >> x;return x;}inline int In(){int x;cin >> x;return x;}
// =======================================================================================================
// int gcd(int a, int b)
// {
//     if (a == 0)
//         return b;
//     return gcd(b % a, a);
// }
    int factorial(int n ){return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;}
// =======================================================================================================
// bool isPrime(int n)
// {
//     if (n <= 1)
//         return false;
//     for (int i = 2; i < n; i++)
//         if (n % i == 0)
//             return false;
//     return true;
// }
// bool isPaintin(string s)
// {
//     string t = s;
//     reverse(s.begin(),s.end());
//     return s==t;
// }
// bool isPowOfTwo(int n)
// {
//     int y = log2(n);
//     return (pow(2, y) == n);
// }
// bool isPerfectSq(double n)
// {
//     double y = sqrt(n);
//     return abs(y * y - n) < -1000000007;
// }
// =======================================================================================================
// bool arraySortedOrNot(int arr[], int n)
// {
//     // Array has one or no element
//     if (n == 0 || n == 1)
//         return true;

//     for (int i = 1; i < n; i++)

//         // Unsorted pair found
//         if (arr[i - 1] > arr[i])
//             return false;

//     // No unsorted pair found
//     return true;
// }
// int n;
// int arr[20];

// int rec(int i, int sum1, int sum2)
// {
   
// }
// =======================================================================================================

void solve()
{
    int a I,b I,c I,k=0;
    if(a==b&&b==c){
        cout<<1<<" "<<1<<" "<<1<<endl;return;
    }
    if(a==b&a!=c){
        if(a<c){
            cout<<abs(a-c)+1<<" "<<abs(a-c)+1<<" "<<0<<endl;return;
        }
        else {
            cout<<1<<" "<<1<<" "<<abs(a-c)+1<<endl;return;
        }
    }
    if(a==c&a!=b){
        if(a<b){
            cout<<abs(a-b)+1<<" "<<0<<" "<<abs(a-b)+1<<endl;return;
        }
        else {
            cout<<1<<" "<<abs(a-b)+1<<" "<<1<<endl;return;
        }
    }
    if(b==c&&b!=a){
        if(b<a){
            cout<<0<<" "<<abs(a-b)+1<<" "<<abs(a-b)+1<<endl;return;
        }
        else{
            cout<<abs(a-b)+1<<" "<<1<<" "<<1<<endl;return;
        }
    }
    int m =max(a,max(c,b));
        a=m-a;
        b=m-b;
        c=m-c;
        cout<<(a==0?0:a+1)<<" "<<(b==0?0:b+1)<<" "<<(c==0?0:c+1)<<endl;



}

// =======================================================================================================

signed main()
{
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