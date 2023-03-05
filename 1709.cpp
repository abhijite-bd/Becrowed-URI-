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
    int n,i,p,t;
    cin>>n;
    p=2;
    t=1;
    while(p!=1) {
        if(p<=n/2)
            p+=p;
        else {
            p-=(n-p+1);
        }
        t++;
    }
    cout<<t<<endl;
    return 0;
}
