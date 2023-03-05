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
    int n,m,i,j,k,l;
    while(cin>>n>>m) {
        if(n==0 and m==0)
            break;
        else {
            int a[n][m];
            int four=0;
            int one=0;
            for(i=0; i<n; i++) {
                for(j=0; j<m; j++) {
                    cin>>a[i][j];
                    if(a[i][j]==1)
                        one++;
                }
                if(one<m)
                    one=1;

            }
        }
    }
    return 0;
}
