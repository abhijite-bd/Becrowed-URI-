#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    int flag,t,n,i,ans;
    cin>>t;
    while(t--) {
        flag=0;
        ans=0;
        string s;
        cin>>s;
        //  transform(s.begin(),s.end(),s.begin(),::tolower);
        n=s.size();
        for(i=0; i<n; i++) {
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')
                flag=0;
            else if(s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U')
                flag=0;
            else
                flag++;
            if(flag==3) {
                ans=1;
                break;
            }
        }
        if(ans)
            cout<<s<<" nao eh facil"<<endl;
        else
            cout<<s<<" eh facil"<<endl;

    }
    return 0;
}
