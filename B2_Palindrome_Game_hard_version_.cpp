#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
bool isPallindrome(string s)
{
    string a =s;
    reverse(s.begin(),s.end());
    return s==a;
}
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll c = count(s.begin(), s.end(), '0');
    if (isPallindrome(s))
    {

        if (c == 1)
        {
            cout << "BOB" << endl;
            return;
        }
        if (c % 2 == 1)
        {
            cout << "ALICE" << endl;
            return;
        }
        cout << "BOB" << endl;
        return;
    }
    else
    {
        if(c==2&&n%2==1&&s[n/2]=='0'){
            cout<<"DRAW"<<endl;
            return;
            
        }
        cout << "ALICE" << endl;
        return;
    }
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
