#include <bits/stdc++.h>
#define ll long long int
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define ss ' '
#define fast()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL)
#define max3(a, b, c) max(max(a, b), c)
#define min3(a, b, c) min(min(a, b), c)
#define pb push_back
using namespace std;
ll fact(ll n)
{
    ll facto=1;
    if (n == 0 or n == 1)
        return 1;
    else
        facto = n * fact(n - 1);
    return facto;
}
int main()
{
    string s;
    while (cin >> s and s != "0")
    {
        ll i, n;
        n = s.size();
        cout << fact(n) << endl;
    }
    return 0;
}