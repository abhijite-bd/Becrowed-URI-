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
    int n,m,i,j,k;
    while(cin>>n>>m and n!=0) {
        vector<int>v(m,n);
        int a[m];
        for(j=0; j<m; j++) {
            cin>>a[j];
        }
        int ans=0;
        for(i=0; i<n; i++) {
            int flag=0;
            for(j=0; j<m; j++) {
                if(a[j]<v[j] and flag==0) {
                    ans++;
                    flag=1;
                    v[j]--;

                } else if(a[j]<v[j] and flag==1) {
                    v[j]--;
                } else
                    flag=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
