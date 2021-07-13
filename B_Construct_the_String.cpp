#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;
    string res="";
    ll d=abs(a-b);
    if(b==1){

    }
    while(d--){
        res=res+"a";
    }
    char c='a';
    while(b--){
        res=res+c++;

    }
    ll l=res.length(),k=0;
    while(n--){
        cout<<res[k++%l];
    }
    cout<<endl;
    
}

int main()
{
    IOS;
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
