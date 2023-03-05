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
    ll t,n1,n2,total;
    string s1,s2,s3,s4;
    cin>>t;
    while(t--) {
        cin>>s1>>s2>>s3>>s4;
        cin>>n1>>n2;
        total=n1+n2;
        if(total%2==0 and s2[0]=='P')
            cout<<s1<<endl;
        else if(total%2==0 and s4[0]=='P')
            cout<<s3<<endl;
        else if(total%2==1 and s2[0]=='I')
            cout<<s1<<endl;
        else
            cout<<s3<<endl;
    }
    return 0;
}
