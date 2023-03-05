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
    int n,m,i,j,x;
    while(cin>>n>>m ) {

        int ans=0,mx=0;
        for(i=0; i<n; i++) {
            ans=0;
            for(j=0; j<m; j++) {
                cin>>x;
                if(x==0)
                    ans++;
            }
            mx=max(ans,mx);
        }
        cout<<m-mx<<endl;
    }

    return 0;
}
