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
    int a[26],i,j,mx,t;
    cin>>t;
    cin.ignore();
    while(t--) {
        string s,s2="\0";
        getline(cin,s);
//        cout<<s<<endl;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        mx=-1;
        for(i=0; i<26; i++) {
            a[i]=0;
        }
        for(i=0; i<s.size(); i++) {
            if(isalpha(s[i])) {
                a[s[i]-'a']++;
//                cout<<s[i]<<ss<<a[s[i]-'a']<<endl;
                if(a[s[i]-'a']>mx)
                    mx=a[s[i]-'a'];
            }
        }
        for(i=0; i<s.size(); i++) {
            if(mx==a[s[i]-'a']) {
                s2+=s[i];
                a[s[i]-'a']=0;
            }
        }
        sort(s2.begin(),s2.end());
        cout<<s2<<endl;
    }
    return 0;
}
