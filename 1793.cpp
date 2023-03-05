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
    int n, i, j, ans, t, x;
    while (cin >> n and n != 0)
    {
        ans = 10;
        j = 0;
        for (i = 0; i < n; i++)
        {
            cin >> t;
            if (i == 0)
                x = t;
            else
            {
                if (t - x <= 10)
                    ans += (t - x);
                else
                {
                    j++;
                }
                x = t;
            }
        }
        cout << ans + j * 10 << endl;
    }
    return 0;
}