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
    int t,n,i,j;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        n=s.size();
        string v="";
        if(isalpha(s[0]))
            v+=(s[0]);
        for(i=1; i<n-1; i++) {
//                cout<<s[i+1];
            if(s[i]=='·' and ('a'<=s[i+1] and s[i+1]<='z'))
                v+=(s[i+1]);
        }
        cout<<v<<endl;
        v.clear();
    }
    return 0;
}
