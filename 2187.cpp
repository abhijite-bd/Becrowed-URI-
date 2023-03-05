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
    int n, i, fif, ten, fiv, one, k;
    k = 1;
    while (cin >> n and n != 0)
    {
        fif = ten = fiv = one = 0;
        fif = n / 50;
        n %= 50;
        ten = n / 10;
        n %= 10;
        fiv = n / 5;
        one = n % 5;
        printf("Teste %d\n", k);
        cout << fif << ss << ten << ss << fiv << ss << one << endl;
        cout << endl;
        k++;
    }
    return 0;
}