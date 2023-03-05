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
    double a[3], b[3];
    cin >> a[0] >> a[1] >> a[2];
    b[0] = a[0];
    b[1] = a[1];
    b[2] = a[2];
    sort(a, a + 3);
    if (a[0] == a[1])
        cout << "Empate\n";
    else
    {
        if (a[0] == b[0])
            cout << "Otavio" << endl;
        else if (a[0] == b[1])
            cout << "Bruno\n";
        else
            cout << "Ian\n";
    }
    return 0;
}