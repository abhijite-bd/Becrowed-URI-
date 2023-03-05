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
    int n,i,j;
    cin>>n;
    int a[n+1][n+1];
    for(i=0; i<=n; i++) {
        for(j=0; j<=n; j++) {
            cin>>a[i][j];
        }
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if((a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1])>=2)
                cout<<'S';
            else
                cout<<"U";
        }
        cout<<endl;
    }
    return 0;
}
