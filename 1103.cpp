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
    int h1,h2,m1,m2,ans;
    while(cin>>h1>>m1>>h2>>m2) {
        ans=0;
        if(h1==0 and h2==0 and m1==0 and m2==0)
            return 0;
        else {
            if(m1>m2) {
                m2+=60;
                h1++;
            }
            ans+=m2-m1;
            if(h1>h2)
                h2+=24;
            ans+=(h2-h1)*60;
            cout<<ans<<endl;
        }
    }

}
