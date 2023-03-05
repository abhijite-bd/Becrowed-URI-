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
int n,m;
int main()
{
    int i,j,r,c,ansr,ansc;
    cin>>n>>m;
    int a[n+1][m+1];

    for(i=1; i<=n; i++) {
        for(j=1; j<=m; j++) {
            cin>>a[i][j];
        }
    }
    for(i=1; i<=n-2; i++) {
        for(j=1; j<=m-2; j++) {
            if(a[i][j]==7 and a[i][j+1]==7 and a[i][j+2]==7) {
                if(i+2<=n and j+2<=m)
                    if(a[i+1][j]==7 and a[i+2][j]==7 and a[i+1][j+2]==7 and a[i+2][j+2]==7) {
                        if(a[i+1][j+1]==42 and a[i+2][j+1]==7) {
                            cout<<i+1<<ss<<j+1<<endl;
                            return 0;
                        }
                    }
            }
        }
    }
    cout<<0<<ss<<0<<endl;
    return 0;
}
