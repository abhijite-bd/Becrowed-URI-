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
    int i,n,ans;
    while(cin>>n and n!=0) {
        string s;
        cin>>s;
        n=s.size();
        ans=0;
        for(i=0; i<n; i++) {
            if(s[i]=='D')
                ans++;
            else
                ans--;
        }
        if(ans<0) {
            ans*=-1;
            ans%=4;
            if(ans==0)
                cout<<"N"<<endl;
            else if(ans==1)
                cout<<"O"<<endl;
            else if(ans==2)
                cout<<"S"<<endl;
            else
                cout<<"L"<<endl;

        } else {
            ans%=4;
            if(ans==0)
                cout<<"N"<<endl;
            else if(ans==1)
                cout<<"L"<<endl;
            else if(ans==2)
                cout<<"S"<<endl;
            else
                cout<<"O"<<endl;
        }
    }
    return 0;
}
