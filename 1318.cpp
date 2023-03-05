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
    int n,i,m,j;
    while(cin>>n>>m and n!=0) {
        int k=0;
        map<int,int>mp;
        for(i=0; i<m; i++) {
            int x;
            cin>>x;
            mp[x]++;
        }
        for(auto e:mp)
            if(e.second>1)
                k++;
        cout<<k<<endl;
    }
    return 0;
}

