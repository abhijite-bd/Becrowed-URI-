#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    int n,m,f;
    string s;
    cin>>n>>m;
    f=n;
    while(m--) {
        cin>>s;
        if(s[0]=='f')
            f++;
        else
            f--;
    }
    cout<<f<<endl;
    return 0;
}
