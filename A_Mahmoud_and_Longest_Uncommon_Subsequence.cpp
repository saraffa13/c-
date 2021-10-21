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
    string a,b,temp;
    cin>>a>>b;
    if(a.length()>b.length())
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(a==b){
        cout<<-1<<endl;
        return;
    }
    cout<<b.length()<<endl;
}

int main()
{
    IOS;
    ll t=1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
