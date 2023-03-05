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
    while(cin>>n) {
        ll total1=0,total2=0,ans=10000000;
        int a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
            total1+=a[i];
        }
        sort(a,a+n);
        for(i=0,j=n-1; i<n/2; i++,j--) {
            total2+=a[j];
            total1-=a[j];
            if(abs(total1-total2)<ans)
                ans=abs(total1-total2);
        }
        cout<<ans<<endl;
    }
    return 0;
}
