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
    unsigned long long int a,b,d;
    while(cin>>a>>b) {
        if(a==0 and b==0)
            return 0;
        int ans=0,c=0;
        while(1) {

            d=a%10+b%10+c;
            a/=10;
            b/=10;
            if(d>9) {
                c=1;
                ans++;
            } else
                c=0;
            if(a==0 and b==0)
                break;
        }
        if(ans==0)
            cout<<"No carry operation."<<endl;
        else if(ans==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<ans<<" carry operations."<<endl;
    }
    return 0;
}
