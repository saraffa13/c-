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
    ll r1,w1,c1,r2,w2,c2;
    cin>>r1>>w1>>c1>>r2>>w2>>c2;
    int count1=0,count2=0;
    if(r1>r2)
        count1++;
    else if(r1<r2)
        count2++;
    if(w1>w2)
        count1++;
    else if(w1<w2)
        count2++;
    if(c1>c2)
        count1++;
    else if(c1<c2)
        count2++;
    if(count1>count2)
    {
        cout<<"A"<<endl;

    }
    else if(count2>count1){
        cout<<"B"<<endl;
    }
    
}

int main()
{
    IOS;
    // ll t=1;
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
