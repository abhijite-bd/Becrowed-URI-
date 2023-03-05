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
    int n,x,j;
    while(cin>>n and n!=0) {
        for(j=0; j<n; j++) {
            vector<int>v;
            for(int i=0; i<5; i++) {
                cin>>x;
                if(x<=127)
                    v.pb(i);
            }
            if(v.size()!=1)
                cout<<'*'<<endl;
            else
                cout<<char(65+v[0])<<endl;
            v.clear();
        }
    }
    return 0;
}
