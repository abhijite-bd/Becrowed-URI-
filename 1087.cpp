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
    ll a,b,c,d;
    while(cin>>a>>b>>c>>d) {
        if(a==0)
            return 0;
        else if(a==c and b==d)
            cout<<0<<endl;
        else {
            if(a==c)
                cout<<1<<endl;
            else if(b==d)
                cout<<1<<endl;
            else if(a+b==c+d)
                cout<<1<<endl;
            else if(abs(a-c)==abs(b-d))
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    }
    return 0;
}
