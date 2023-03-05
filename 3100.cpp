#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
//    cppied
    string s;
    cin >> s;
    int three = 0, five = 0, seven = 0;
    for (auto& x : s) {
        if (x == '3' && !seven) three++;
        else if (x == '5') five++;
        else if (x == '7') seven = 1;
    }
    while (three--) cout << '3';
    while (five--) cout << '5';
    seven = 0;
    for (auto& x : s) {
        if (x == '7') seven = 1;
        if (x != '5' && seven) cout << x;
    }
    cout << endl;
    return 0;
}
