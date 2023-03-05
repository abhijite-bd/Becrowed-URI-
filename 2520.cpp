#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
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
    int n,m,i,ans,r1,r2,c1,c2,j;
    while(cin>>n>>m) {
        int a[n][m];
        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                cin>>a[i][j];
                if(a[i][j]==1) {
                    r1=i;
                    c1=j;
                }
                if(a[i][j]==2) {
                    r2=i;
                    c2=j;
                }
            }
        }
        ans=abs(r1-r2)+abs(c1-c2);
        cout<<ans<<endl;
    }
    return 0;
}
