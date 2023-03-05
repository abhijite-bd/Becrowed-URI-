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
    double n,i,a,b,ans;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a>>b;
        if(a==1001)
            ans+=b*1.5;
        else if(a==1002)
            ans+=b*2.5;
        else if(a==1003)
            ans+=b*3.5;
        else if(a==1004)
            ans+=b*4.5;
        else if(a==1005)
            ans+=b*5.5;
    }
    printf("%.2lf\n",ans);
    return 0;
}
