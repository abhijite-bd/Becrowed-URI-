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
bool cmp(pair<int,int>a,pair<int,int>b)
{
    return a.second<b.second;
}
int main()
{
    map<int,int>mp;
    string s;
    int i,n,j;
    while(cin>>s) {
        n=s.size();
        for(i=0; i<n; i++) {
            int x=s[i];
            mp[x]+=1;
        }
        vector<pair<int,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),cmp);
        for(i=0; i<v.size(); i++) {
            cout<<v[i].first<<ss<<v[i].second<<endl;
        }
        mp.clear();
//        cout<<endl;
    }
    return 0;
}
