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
    int n,i,j,x,y;
    int k=1,space=0;

    while(cin>>n and n!=0) {
        int pep=0,food=0,ans;
        map<int,int>m;
        for(i=0; i<n; i++) {
            cin>>x>>y;
            pep+=x;
            food+=y;
            if(m.find(y/x)!=m.end())
                m[y/x]+=x;
            else
                m[y/x]=x;
        }
        printf("Cidade# %d:\n",k);

        for(auto it=m.begin(); it!=m.end(); it++) {
            if(it==(--m.end()))
                cout<<it->second<<'-'<<it->first<<endl;
            else
                cout<<it->second<<'-'<<it->first<<" ";
        }
        printf("Consumo medio: %.2lf m3.\n",floor(100*(float)food/pep)/100.0);
        k++;
        m.clear();
    }
    return 0;
}
