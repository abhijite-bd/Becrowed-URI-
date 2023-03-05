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
    int t,n,n1,i,j,flag,m,k;
    cin>>t;
    while(t--) {
        string s,test;
        cin>>s;
        cin>>m;
        for(k=0; k<m; k++) {
            cin>>test;
            int c=0,low=0;
            for(i=0; i<test.size(); i++) {
                for(j=low; j<s.size(); j++) {
                    if(test[i]==s[j]) {
                        c++;
                        low=j+1;
                        break;
                    }
                }
            }
            if(c==test.size())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
