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
    string s, s2;
    cin >> s;
    int i, n = s.size(), c=0, sum = 0;
    for (i = 0; i < n; i++)
    {
      
        if (s[i] == '1')
        {
            if (i + 1 != n)
            {
                if (s[i + 1] == '0')
                {
                    s2 = s.substr(i, 2);
                    i++;
                }
                else
                {
                    s2 = s.substr(i, 1);
                }
            }
            else
                s2 = s.substr(i, 1);
        }
        else
        {
            s2 = s.substr(i, 1);
        }
        int z = stoi(s2);
        sum += z;
        c++;
    }
    printf("%.2lf\n", sum * 1.0 / c);
    return 0;
}