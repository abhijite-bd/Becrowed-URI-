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
int main()
{
    int n, i, ans;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int a = s[0] - '0';
        int b = s[2] - '0';
        if (s[0] == s[2])
            cout << a * b << endl;
        else if (isupper(s[1]))
            cout << b - a << endl;
        else
            cout << a + b << endl;
    }
    return 0;
}