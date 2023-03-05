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
    string s1,s2;
    int t,n,i,j,ans;
    cin>>t;
    while(t--) {
        ans=0;
        cin>>s1>>s2;
        n=s1.size();
        for(i=0; i<n; i++) {
            char a=s1[i];
            char b=s2[i];
            int x=b-a;
            if(x<0)
                x+=26;
            ans+=x;
        }
        cout<<ans<<endl;
    }
    return 0;
}
