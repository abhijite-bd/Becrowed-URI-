#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
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
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,i;
    cin>>t;
    while(t--) {
        string s;
        int j;
        cin>>s>>j;
        for(i=0; i<s.size(); i++) {
            n=s[i]-'A'-j;
            if(n<0)
                n+=26;
            s[i]=n+'A';
        }
        cout<<s<<endl;
    }
    return 0;
}
