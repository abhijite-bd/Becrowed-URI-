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
    int n,m,i,j,k;
    while(cin>>n>>m and n!=0) {
        int a[n][m];
        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                cin>>a[i][j];
            }
        }
        int flag=0;
        for(i=0; i<n; i++) {
            int x=1;
            for(j=0; j<m; j++) {
                x*=a[i][j];
            }
            if(x==1) {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
