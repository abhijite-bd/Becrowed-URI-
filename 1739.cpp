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
int chk(ll n)
{
    while (n != 0) {
        int x = n % 10;
        if (x == 3)
            return 1;
        n /= 10;
    }
    return 0;
}
int main()
{
    vector<ll> v;
    ll fibo[10000];
    fibo[0] = 1;
    fibo[1] = 1;
    int i, n;
    ll x;
    for (i = 2; i < 1000; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        if (fibo[i] % 3 == 0 or chk(fibo[i]))
            v.pb(fibo[i]);

        if (v.size() == 60)
            break;
    }
    while (cin >> n) {
        cout << v[n - 1] << endl;
    }
    return 0;
}
