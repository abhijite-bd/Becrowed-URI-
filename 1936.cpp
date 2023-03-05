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
    int n, i, p, c = 0;
    cin >> n;
    p = n;
    int fact[] = {1, 2, 6, 24, 120, 720, 5040, 40320};
    for (i = 7; i >= 0; i--)
    {
        if (p >= fact[i])
        {
            p -= fact[i];
            i++;
            c++;
        }
        if (p == 0)
            break;
        if (i == 0 and p != 0)
            i = 7;
            // cout<<p<<endl;
    }
    cout << c << endl;
    return 0;
}