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
    int i, n, a;
    double x, y;
    while (cin >> n and n != 0)
    {
        for (i = 0; i < n; i++)
        {
            cin >> a >> x >> y;
            printf("Size #%d:\n", i + 1);
            printf("Ice Cream Used: %.2lf cm2\n", a * (x + y) * 2.5);
        }
        cout<<endl;
    }
    return 0;
}