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
    int a[]= {6,2,5,5,4,5,6,3,7,6};
    string s;
    ll t,i;
    cin>>t;
    while(t--) {
        ll total=0;
        cin>>s;
        for(i=0; i<s.size(); i++) {
            int b=s[i]-'0';
            total+=a[b];
//            cout<<b<<ss<<total<<endl;
        }
        cout<<total<<" leds"<<endl;
    }
    return 0;
}
