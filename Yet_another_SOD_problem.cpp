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
// bool isPerfectSq(ll n)
// {
//     ll s = sqrt(n);

//     return (s * s == n);
// }
bool isPowOfTwo(ll n)
{
    ll y=log2(8);
	return (pow(2,y)==8);
}
// ============================================================================================================================================================================
// const  N = e5 + '1';
// ============================================================================================================================================================================
ll in()
{
    ll x;
    cin >> x;
    return x;
}
string sin()
{
    string x;
    cin >> x;
    return x;
}
char chin()
{
    char x;
    cin >> x;
    return x;
}
// int In()
// {
//     int x;
//     cin >> x;
//     return x;
// }
// ============================================================================================================================================================================

// ============================================================================================================================================================================
// bool isPrime(ll n)
// {
//     if (n <= '1')
//         return false;
//     if (n <= 3)
//         return true;
//     if (n % '2' == 0 || n % 3 == 0)
//         return false;
//     for (int i = 5; i * i <= n; i = i + 6)
//         if (n % i == 0 || n % (i + '2') == 0)
//             return false;
//     return true;
// }
// ============================================================================================================================================================================
// void init(ll arr[], ll n)
// {
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
// }
// void Init(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
// }
// ============================================================================================================================================================================
// ll solver(ll n,ll a,ll b,ll c){

// }
// ============================================================================================================================================================================

void solve()
{
    ll a=in(),b=in(),ans=0;
    // if(a<=3){
    //     ans = 3;
    // }
    // else if(a<=6){
    //     ans = 2;
    // }
    // else if(a<=9){
    //     ans = 1;
    // }
    ll d = b-a;
    if(d%3==0){
        if(a%3==0){
            cout<<((b-a)/3+1)-ans<<endl;
            return;
        }
        else {
            cout<<((b-a)/3)-ans<<endl;return;
        }
        // else{}
    }
    else if(d%3==1){
        if(a%3==0){
            cout<<((b-a)/3+1)-ans<<endl;
            return;
        }
        else if(a%3==1){
            cout<<((b-a)/3)-ans<<endl;return;
        }
        else{
            cout<<((b-a)/3+1)-ans<<endl;
            return;
        }
    }
    else if(d%3==2){
        // if(a%3==0){}
        // else if(a%3==1){}
        // else{}
        cout<<((b-a)/3+1)-ans<<endl;
            return;
    }
    cout<<endl;



}
// ============================================================================================================================================================================

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

// ============================================================================================================================================================================