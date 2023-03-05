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
    int p, i, n, c;
    while (cin >> p >> n >> c and (p + n + c))
    {
        int a[n][p], ans = 0;
        for (i = 0; i < n; i++)
        {
            for (int j = 0; j < p; j++)
            {

                cin >> a[i][j];
            }
        }
        for (int i = 0; i < p; i++)
        {
            int l = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j][i] == 1)
                {
                    l++;
                }
                else
                {
                    if (l >= c)
                        ans++;
                    l = 0;
                }
                if (j == n - 1)
                {
                    if (a[j][i] == 1)
                    {
                        if (l >= c)
                            ans++;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}