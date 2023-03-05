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
    int n,i,pos;
    cin>>n;
    double a[n],b[n],mx=-1;
    for(i=0; i<n; i++) {
        cin>>a[i]>>b[i];
        if(b[i]>mx)
            mx=b[i],pos=i;
    }
    if(mx<8)
        cout<<"Minimum note not reached"<<endl;
    else
        cout<<a[pos]<<endl;
    return 0;
}
