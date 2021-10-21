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
    string a = s;
    reverse(s.begin(), s.end());
    return s == a;
}
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (s.find(ch) == string::npos)
        {
            cout << ch << endl;
            return;
        }
    }
    string a = "";
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (char c = 'a'; c < 'z'; c++)
        {
            a = "";
            a = a + ch + c;
            if (s.find(a) == string::npos)
            {
                cout << (a) << endl;
                return;
            }
        }
    }
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        a="";
        for (char c = 'a'; c < 'z'; c++)
        {
            a = "";
            for (char d = 'a'; d < 'z'; d++)
            {
            a = "";

                a = a + ch + c +d;
                if (s.find(a) == string::npos)
                {
                    cout << (a) << endl;
                    return;
                }
            }
        }
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
