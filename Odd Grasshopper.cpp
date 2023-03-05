#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
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
    ll a,n,t,p;
    cin>>t;
    while(t--) {
        cin>>a>>p;
        n=p;
        if(a%2==0) {
            if(n%4==0)
                cout<<a<<endl;
            else if(n%4==1)
                cout<<a-p<<endl;
            else if(n%4==2)
                cout<<a+1<<endl;
            else if(n%4==3)
                cout<<a+p+1<<endl;
        } else {
            if(n%4==0)
                cout<<a<<endl;
            else if(n%4==1)
                cout<<a+p<<endl;
            else if(n%4==2)
                cout<<a-1<<endl;
            else if(n%4==3)
                cout<<a-1-p<<endl;
        }

    }

    return 0;
}
