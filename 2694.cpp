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
    ll t,n,i,j,total;
    cin>>t;
    while(t--) {
        string s,s2="";
        cin>>s;
        n=s.size();
        s2="";
        total=0;
        for(i=0; i<n; i++) {
            if(isdigit(s[i])) {
                s2+=s[i];
            } else if(s2.size()>0 ) {
                j=stoll(s2,nullptr,10);
                total+=j;
                s2="";
            }
        }
        if(s2.size()>0) {
            j=stoll(s2,nullptr,10);
            total+=j;
        }
        cout<<total<<endl;
    }
    return 0;
}
