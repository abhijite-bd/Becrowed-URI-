#include<bits/stdc++.h>
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
    string s;
    cin>>s;
    int i,f=1;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    if(s.size()>=5) {
        for(i=0; i<s.size()-4; i++) {
            if(s[i]=='z' and s[i+1]=='e' and s[i+2]=='l' and s[i+3]=='d' and s[i+4]=='a')
                f=0;
        }
    }
    if(f)
        cout<<"Link Tranquilo"<<endl;
    else
        cout<<"Link Bolado"<<endl;
    return 0;
}
