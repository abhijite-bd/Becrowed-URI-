#include<bits/stdc++.h>
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
    ll a,b,i;
    while(cin>>a>>b and a!=0 and b!=0) {
        a+=b;
        string s=to_string(a);
        for(i=0; i<s.size(); i++) {
            if(s[i]=='0')
                continue;
            else
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
