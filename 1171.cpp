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
    int n,x,y;
    cin>>n;
    int i;
    map<int,int>m;
    for(i=0; i<n; i++) {
        cin>>x;
        m[x]++;
    }
    for(auto e:m)
        printf("%d aparece %d vez(es)\n",e.first,e.second);
    return 0;
}
