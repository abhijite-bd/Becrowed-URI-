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
  int t,n,x,y,bus,car;
  cin>>t;
  while(t--)
  {
      cin>>n>>x>>y;
      bus=(n%100==0?n/100:n/100+1);
      car=(n%4==0?n/4:n/4+1);
      int allbus=bus*x;
      int allcar=car*y;
      int buspluscar=(n/100)*x;
      int p=(n%100);
      buspluscar+=(p%4==0?p/4:p/4+1)*y;
      int carplusbus=(n/4)*y;
      p=n%4;
      if(p!=0)
      carplusbus+=x;
      int ans=min3(allbus,allcar,buspluscar);
      ans=min(ans,carplusbus);
      cout<<ans<<endl;
  }
return 0;
}