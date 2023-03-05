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
    int n,k,i,x,y;
    while(cin>>n>>k and n!=0) {
        vector<int>va,ve;
        int flag=1;
        for(i=0; i<n; i++) {
            cin>>x>>y;
            va.pb(x);
            ve.pb(y);
            int l=va.size();
            if(l>k) {
                flag=0;
            }

        }
    }
    return 0;
}
