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
    int t, n, num, pos, d, i;
    cin >> t;
    while (t--)
    {
        cin >> n >> num;
        int flag = 0, mn = INT_MAX;
        pos = 1;
        for (i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            d = abs(num - x);
            if (x == num and !flag)
            {
                flag = 1;
                pos = i + 1;
            }
            if (!flag)
            {
                if (d < mn)
                {
                    pos = i + 1;
                    mn = d;
                }
            }
        }
        cout << pos << endl;
    }
    return 0;
}