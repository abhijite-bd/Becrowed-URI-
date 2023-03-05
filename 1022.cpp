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
    int t,a,b,c,d,ans1,ans2,ans3,ans4,i;
    char c1,c2,c3;
    cin>>t;
    while(t--) {
        cin>>a>>c1>>b>>c2>>c>>c3>>d;
        if(c2=='+') {
            ans1=a*d+b*c;
            ans2=b*d;
        } else if(c2=='-') {
            ans1=a*d-b*c;
            ans2=b*d;
        } else if(c2=='*') {
            ans1=a*c;
            ans2=b*d;
        } else if(c2=='/') {
            ans1=a*d;
            ans2=b*c;
        }
        if(ans1<0) {
            ans1*=-1;
            int g=gcd(ans1,ans2);
            printf("-%d\/%d = -%d\/%d\n",ans1,ans2,ans1/g,ans2/g);
        } else {
            int g=gcd(ans1,ans2);
            printf("%d\/%d = %d\/%d\n",ans1,ans2,ans1/g,ans2/g);
        }

    }
    return 0;
}
