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
double pi=3.141592654;
int main()
{
    double a,b,c,t,angel,result;
    while(cin>>a>>b>>c) {
        angel=tan ( a * pi / 180.0 );
        t=angel*b;
        result=(t+c)*5;
        printf("%.2lf\n",result);
    }
    return 0;
}
