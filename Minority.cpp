#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        n=s.size();
        int zero=0,one=0;
        for(i=0; i<n; i++) {
            if(s[i]=='0')
                zero++;
            else
                one++;
        }
        if(zero==one) {
            if(zero==1)
                cout<<0<<endl;
            else
                cout<<zero-1<<endl;
        } else {
            cout<<min(zero,one)<<endl;
        }
    }
    return 0;
}
