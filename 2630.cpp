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
    int t,i=1,j,n;
    int ans;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        if(s=="eye")    {
            ans=a[0]*30+a[1]*59+a[2]*11;
            printf("Caso #%d: %d\n",i,ans/100);
        }
        sort(a,a+3);
        if(s=="min")
            printf("Caso #%d: %d\n",i,a[0]);
        if(s=="max")
            printf("Caso #%d: %d\n",i,a[2]);
        if(s=="mean") {
            ans=a[0]+a[1]+a[2];
            printf("Caso #%d: %d\n",i,ans/3);
        }
        i++;
    }
    return 0;
}
