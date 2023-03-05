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
    int n;
    double ans1,ans2,ans3,ans;
    cin>>n;
    ans1=pow((1+sqrt(5))/2,n);
    ans2=pow((1-sqrt(5))/2,n);
    ans3=(ans1-ans2)/sqrt(5);
    printf("%.1lf\n",ans3);
    return 0;
}
