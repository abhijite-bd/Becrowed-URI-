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
    int r1,r2,x1,x2,y1,y2;
    while(cin>>r1>>x1>>y1>>r2>>x2>>y2) {
        double d=sqrt((x1-x2)*(x1-x2)*1.0+(y1-y2)*(y1-y2)*1.0);
        if(d+r2>r1)
            cout<<"MORTO\n";
        else
            cout<<"RICO\n";
    }
    return 0;
}
