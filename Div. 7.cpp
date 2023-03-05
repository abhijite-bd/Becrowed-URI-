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
    int t,n,ans,r,i;
    cin>>t;
    while(t--) {
        cin>>n;
        if(n%7==0)
            cout<<n<<endl;
        else {
            ans=n-n%10;
            for(i=1; i<=9; i++) {
                if((ans+i)%7==0) {
                    cout<<ans+i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
