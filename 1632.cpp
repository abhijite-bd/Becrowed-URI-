#include<bits/stdc++.h>
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
    int t,n,i,ans;
    cin>>t;
    while(t--) {
        ans=1;
        string s;
        cin>>s;
        n=s.size();
        transform(s.begin(),s.end(),s.begin(),::tolower);

        for(i=0; i<n; i++) {
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='s')
                ans*=3;
            else
                ans*=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
