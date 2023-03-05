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
    int n, t, i, j, k, p, q, r, z;
    char c;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int m = pow(2, n);
        int one = 0, zero = 0;
        int a[m];
        cout << "Mapa de Karnaugh" << endl;

        if (n == 2)
        {
            for (i = 0; i < m; i++)
            {
                scanf("%d %d %c %d", &p, &q, &c, &a[i]);
                if (a[i] == 0)
                    zero++;
                else
                    one++;
            }
            cout << "  0 1\n";
            printf("0|%d %d\n1|%d %d\n", a[0], a[2], a[1], a[3]);
        }
        else if (n == 3)
        {
            for (i = 0; i < m; i++)
            {
                scanf("%d %d %d %c %d", &p, &q, &r, &c, &a[i]);
                if (a[i] == 0)
                    zero++;
                else
                    one++;
            }
            cout << "  00 01 11 10\n";
            printf("0|%d  %d  %d  %d\n", a[0], a[2], a[6], a[4]);
            printf("1|%d  %d  %d  %d\n", a[1], a[3], a[7], a[5]);
        }
        else if (n == 4)
        {
            for (i = 0; i < m; i++)
            {
                scanf("%d %d %d %d %c %d", &p, &q, &r, &z, &c, &a[i]);
                if (a[i] == 0)
                    zero++;
                else
                    one++;
            }
            cout << "   00 01 11 10\n";
            printf("00|%d  %d  %d  %d\n", a[0], a[4], a[12], a[8]);
            printf("01|%d  %d  %d  %d\n", a[1], a[5], a[13], a[9]);
            printf("11|%d  %d  %d  %d\n", a[3], a[7], a[15], a[11]);
            printf("10|%d  %d  %d  %d\n", a[2], a[6], a[14], a[10]);
        }
        if (m == one)
            cout << "Tautologia" << endl;
        else if (m == zero)
            cout << "Contradicao" << endl;
        else
            cout << "Contingencia" << endl;
        if (t  != 0)
            cout << endl;
    }
    return 0;
}