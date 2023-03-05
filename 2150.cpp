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
    int n1,n2,i,ans,j;
    while(cin>>s1) {
        ans=0;
        cin.ignore();
        getline(cin,s2);
        n1=s1.size();
        n2=s2.size();
        for(i=0; i<n1; i++) {
            for(j=0; j<n2; j++) {
                if(s1[i]==s2[j])
                    ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
