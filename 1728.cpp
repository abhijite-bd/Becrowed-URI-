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
    string s;
    while (cin >> s) {
        string s1, s2, s3;
        int p = s.find('+');
        s1 = s.substr(0, p);
        int q = s.find('=');
        s2 = s.substr(p + 1, q - p-1);
        s3 = s.substr(q+1, s.size() - q);
//        cout<<s1<<ss<<s2<<ss<<s3<<endl;
        reverse(s1.begin(), s1.end());
        ll a = stoll(s1);
        reverse(s2.begin(), s2.end());
        ll b = stoll(s2);
        reverse(s3.begin(), s3.end());
        ll c = stoll(s3);
        if (a + b == c)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
