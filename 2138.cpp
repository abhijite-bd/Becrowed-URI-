#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss ' ' 
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
int main()
{
  string s;
  while(cin>>s)
  {
      vector<ll>v(10,0);
    //   0 0 0 0 0 0 0 0 0 0
    for (int i = 0; i < s.size(); i++)
    {
        int x=s[i]-'0';
        v[x]++;
    }
    // for(auto e:v)
    // cout<<e<<ss;
    // cout<<endl;
    int mx=v[0],ans=0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]>=mx)
        {
            mx=v[i];
            ans=i;
        }
    }
    cout<<ans<<endl;
  }
return 0;
}