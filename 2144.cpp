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
    double w1, w2, r, m, avg, total = 0;
    int c=0;
    while (cin >> w1 >> w2 >> r)
    {
        if (w1 == 0 and w2 == 0)
        {
            avg = total / c;
            // cout<<ss<<c<<endl;
            cout << endl;
            if (avg >= 40)
                cout << "Aqui nois constroi fibra rapaz! Nao e agua com musculo!" << endl;
            return 0;
        }
        m = (w1 + w2) / 2;
        m *= (30 + r);
        m /= 30;
        total += m;
        c++;
        if (m >= 1 and m < 13)
            cout << "Nao vai da nao" << endl;
        else if (m >= 13 and m < 14)
            cout << "E 13" << endl;
        else if (m >= 14 and m < 40)
            cout << "Bora, hora do show! BIIR!" << endl;
        else if (m >= 40 and m <= 60)
            cout << "Ta saindo da jaula o monstro!" << endl;
        else
            cout << "AQUI E BODYBUILDER!!" << endl;
    }
}
