#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
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
        string s;
        cin>>s;
        int flag=1;
        if(s.size()!=8)
            flag=0;
        for(i=0; i<8; i++) {
            if(i<3) {
                if(!isupper(s[i]))
                    flag=0;
            }
            if(i==3 and s[i]!='-')
                flag=0;
            if(i>3) {
                if(!isdigit(s[i]))
                    flag=0;
            }
        }
        if(flag) {
            n=s[7]-'0';
            if(n==1 or n==2)
                cout<<"MONDAY"<<endl;
            if(n==3 or n==4)
                cout<<"TUESDAY"<<endl;
            if(n==5 or n==6)
                cout<<"WEDNESDAY"<<endl;
            if(n==7 or n==8)
                cout<<"THURSDAY"<<endl;
            if(n==9 or n==0)
                cout<<"FRIDAY"<<endl;
        } else {
            cout<<"FAILURE"<<endl;
        }
    }
    return 0;
}
