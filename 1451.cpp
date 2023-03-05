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
    string s;
    int i,n,j;
    while(cin>>s) {
        n=s.size();
        string s2="";
        int flag=0;
        for(i=0; i<n; i++) {
            if(s[i]==']') {
                flag=0;
                continue;
            }
            if(flag==1 and s[i]!=']' and s[i]!='[')
                s2+=s[i];
            if(s[i]=='[')
                flag=1;
        }
        flag=0;
        cout<<s2;
        for(i=0; i<n; i++) {
            if(s[i]=='[') {
                flag=1;
                continue;
            }
            if(s[i]==']') {
                flag=0;
                continue;
            }
            if(flag==0 and s[i]!=']' and s[i]!='[')
                cout<<s[i];

        }
        cout<<endl;
    }
    return 0;
}
