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
    while(cin>>s) {
        stack<int>st;
        n=s.size();
        for(i=0; i<n; i++) {
            if( s[i]=='(')
                st.push(-1);
            if(s[i]==')' )
                st.push(1);
        }
        int sum=0,flag=0;
        while(!st.empty()) {
            sum+=st.top();
            if(sum<0)
                flag=1;
            st.pop();
        }
        if(flag or sum!=0)
            cout<<"incorrect\n";
        else
            cout<<"correct\n";
    }
    return 0;
}
