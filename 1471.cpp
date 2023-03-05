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
    int n,r,x,i;
    while(cin>>n>>r) {
        vector<int>v(n+1,0);
        for(i=0; i<r; i++) {
            cin>>x;
            v[x]=1;
        }
        if(n-r==0) {
            cout<<'*'<<endl;
        } else {
            int flag=0;
            for(i=1; i<=n; i++) {
                if(v[i]==0) {
//                    if(flag)
//                        cout<<ss;
                    cout<<i<<ss;
//                    flag=1;
                }
            }
            cout<<endl;
        }
        v.clear();
    }
    return 0;
}
