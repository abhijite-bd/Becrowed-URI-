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
    int t,n,i,j,k;
    cin>>t;
    while(t--) {
        cin>>n;
        int  a[n];
        map<int,int>m;
        int flag=0;
        for(i=0; i<n; i++) {
            cin>>a[i];
            if(m.find(a[i])==m.end())
                m[a[i]]=i;
            else {
                if(i-m[a[i]]>1)
                    flag=1;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
