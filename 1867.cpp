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
ll sum(string s)
{
    while(1) {
        ll sum=0;
        for(int i=0; i<s.size(); i++) {
            sum+=(s[i]-'0');
        }
        s=to_string(sum);
        if(s.size()==1)
            return sum;
    }
}
int main()
{
    string s1,s2;
    while(cin>>s1>>s2) {
        if(s1=="0" and s2=="0")
            return 0;
        ll sum1,sum2;
        sum1=sum(s1);
        sum2=sum(s2);
//        cout<<sum1<<ss<<sum2<<endl;
        if(sum1>sum2)
            cout<<1<<endl;
        else if(sum1==sum2)
            cout<<0<<endl;
        else
            cout<<2<<endl;
    }


}
