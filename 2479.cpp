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
  int n;
  int plus=0,minus=0,i;
  string s;
  cin>>n;
  multiset<string>st;
  char c;
  for (i = 0; i < n; i++)
  {
      cin>>c;
      if(c=='+')
      plus++;
      else
      minus++;
      cin>>s;
      st.insert(s);
  }
  for(auto e:st)
  cout<<e<<endl;
  printf("Se comportaram: %d | Nao se comportaram: %d\n",plus,minus);
return 0;
}