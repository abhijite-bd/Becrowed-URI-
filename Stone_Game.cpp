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
    string a, b;
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());
        //   cout<<a<<endl;
        //   cout<<b<<endl;
        int i, j = 0, k = 0;
        string s1 = "", s2 = "";
        for (i = 0; i < 2 * n; i++)
        {
            int p = s1.size() - 1;
            if (i % 2 == 0)
            {
                if (i == 0)
                {
                    s1 += a[j];
                    j++;
                }
                else if (a[j] < s1[p])
                {
                    s1 += a[j];
                    j++;
                }
                else
                {
                    s2 += a[j];
                    j++;
                }
            }
            else
            {
                if (b[k] > s1[p])
                {
                    s1.pb(b[k]);
                    k++;
                }
                else
                {
                    s2.pb(b[k]);
                    k++;
                }
            }
        cout << s1;
        reverse(s2.begin(), s2.end());
        cout << s2 << endl;
        }
    }
    return 0;
}