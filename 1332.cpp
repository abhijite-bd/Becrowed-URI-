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
//    map<int,string> mp{{1,"one"},{2,"two"},{3,"three"}};
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        if(s.size()==5)
            cout<<3<<endl;
        else if((s[0]=='t' && s[1]=='w')||(s[0]=='t' && s[2]=='o')||(s[1]=='w' && s[2]=='o'))
            printf("2\n");
        else
            cout<<1<<endl;
    }
    return 0;
}
