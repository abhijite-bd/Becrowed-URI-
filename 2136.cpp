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
    set<string>s_y,s_n;
    string s1,s2,ans="";
    int i,c,mx=0,n=0;
    while(cin>>s1 and s1!="FIM") {
        cin>>s2;
        if(s2=="YES")
            s_y.insert(s1);
        else
            s_n.insert(s1);
        if(n==0)
            n=s1.size();
        if(n<s1.size() and s2=="YES") {
            n=s1.size();
            ans=s1;
        }
    }

    for(auto it:s_y)
        cout<<it<<endl;
    for(auto it:s_n)
        cout<<it<<endl;
    cout<<endl;
    printf("Amigo do Habay:\n");
    cout<<ans<<endl;
    return 0;
}
