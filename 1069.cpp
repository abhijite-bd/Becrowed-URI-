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
    int n,i,j;
    int t;
    cin>>t;
    while(t--) {
        stack<int>st;
        cin>>s;
        n=s.size();
        for(i=0; i<n; i++) {
            if( s[i]=='<')
                st.push(-1);
            if(s[i]=='>' )
                st.push(1);
        }
        int sum=st.size(),ans=0,c=0;
        while(!st.empty()) {
            if(st.top()==1)
                c++;
            else {
                if(c>0) {
                    ans++;
                    c--;
                }
            }
            st.pop();
        }
        cout<<ans<<endl;
    }
    return 0;
}