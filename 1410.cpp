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
    int n,m,i;
    while(cin>>n>>m and n!=0) {
        int atk[n],df[m];
        for(i=0; i<n; i++) {
            cin>>atk[i];
        }
        for(i=0; i<m; i++) {
            cin>>df[i];
        }
        sort(atk,atk+n);
        sort(df,df+m);
        if(atk[0]>=df[0] and atk[0]>=df[1])
            cout<<"N"<<endl;
        else if(atk[0]>=df[1])
            cout<<"N"<<endl;
        else
            cout<<"Y"<<endl;
    }
    return 0;
}
