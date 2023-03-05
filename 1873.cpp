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
    int t,n,i,j;
    cin>>t;
    while(t--) {
        string s1,s2,s3,s4,s5,s6,s7;
        s3="tesoura";
        s4="papel";
        s5="pedra";
        s6="lagarto";
        s7="spock";
        cin>>s1>>s2;
        if(s1==s2)
            cout<<"empate\n";
        else if(s1==s3 and s2==s4) cout<<"rajesh"<<endl;
        else if(s1==s4 and s2==s5) cout<<"rajesh"<<endl;
        else if(s1==s5 and s2==s6) cout<<"rajesh"<<endl;
        else if(s1==s6 and s2==s7) cout<<"rajesh"<<endl;
        else if(s1==s7 and s2==s3) cout<<"rajesh"<<endl;
        else if(s1==s3 and s2==s6) cout<<"rajesh"<<endl;
        else if(s1==s4 and s2==s7) cout<<"rajesh"<<endl;
        else if(s1==s7 and s2==s5) cout<<"rajesh"<<endl;
        else if(s1==s5 and s2==s3) cout<<"rajesh"<<endl;
        else                                     cout<<"sheldon"<<endl;
    }
    return 0;
}
