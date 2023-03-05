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
int btod(string s)
{
    ll ans=0;
    reverse(s.begin(),s.end());
    for(int i=0; i<s.size(); i++) {
        ans+=(s[i]-'0')*pow(2,i);
    }
    return ans;
}
int main()
{
    int n,i,v1,v2,j;
    string s1,s2;
    cin>>n;
    for(i=1; i<=n; i++) {
        cin>>s1>>s2;
        int flag=0;
        if(s1.size()==1 or s2.size()==1)
            printf("Pair #%d: Love is not all you need!\n",i);
        else {
            v1=btod(s1);
            v2=btod(s2);
            for(j=2; j*j<=min(v1,v2); j++) {
                if(v1%j==0 and v2%j==0) {
                    flag=1;
                    break;
                }
            }
            if(flag)
                printf("Pair #%d: All you need is love!\n",i);
            else
                printf("Pair #%d: Love is not all you need!\n",i);

        }
    }
    return 0;
}
