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
    ll m=in(),s=in();

    if(s==0){
        if(m==1){
            cout<<0<<" "<<0<<endl;
            return;
        }
        cout<<-1<<" "<<-1<<endl;
        return;
    }
    if(s==9*m){
        string r =string (s/9,'9');
        cout<<r<<" "<<r<<endl;return;
    }
    if(s>9*m){
        cout<<-1<<" "<<-1<<endl;
        return;
    }
    ll m2=0;
    ll q = s/9,r=s%9;
    string st = string(q,'9');
    st=st+to_string(r);
    
    string tt = string(m-(q+1),'0');
    st=st+tt;
    if(s%9==0){

            string a = string(q-1,'9');
            if(m-q+1>1){
                a ='8'+ a;
                string b = string(m-q-1,'0');
                a = b+a;
                a='1'+a;
            }
            else{
                a = to_string(s-(9*(q-1)))+a;
            }
        cout<<a<<" "<<st<<endl;
        return;
    }
    else{
        string a = string(q,'9');
        if(m-q>1){
            a = to_string(r-1) +a;
            string b =string (m-(q+2),'0');
            a =b+a;
            a = '1'+a;
        }
        else{
            a = to_string(s - (q*9))+a;
        }
        cout<<a<<" "<<st<<endl;
        return;
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