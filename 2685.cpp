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
    double n,ans;
    int h,m,s;
    while(cin>>n) {
        ans=240*n;
        if(n==0 or n==360 or n<90) {
            if(n==360)
                ans=0;
            cout<<"Bom Dia!!"<<endl;
            h=6+ans/3600;
            ans=(int)ans%3600;
            m=ans/60;
            s=(int)ans%60;
            if(h<10)
                cout<<"0"<<h<<":";
            else
                cout<<h<<":";
            if(m<10)
                cout<<"0"<<m<<":";
            else
                cout<<m<<":";
            if(s<10)
                cout<<"0"<<s<<endl;
            else
                cout<<s<<":"<<endl;
        }
//(Good Afternoon!!), (Good Night!!), (Good Morning) and (Dawn!!).
        if(n>=90 and n<180) {
            cout<<"Boa Tarde!!\n";
            h=6+ans/3600;
            ans=(int)ans%3600;
            m=ans/60;
            s=(int)ans%60;
            if(h<10)
                cout<<"0"<<h<<":";
            else
                cout<<h<<":";
            if(m<10)
                cout<<"0"<<m<<":";
            else
                cout<<m<<":";
            if(s<10)
                cout<<"0"<<s<<endl;
            else
                cout<<s<<":"<<endl;
        }
        if(n>=180 and n<270) {
            cout<<"Boa Noite!!\n";
            h=6+ans/3600;
            ans=(int)ans%3600;
            m=ans/60;
            s=(int)ans%60;
            if(h<10)
                cout<<"0"<<h<<":";
            else
                cout<<h<<":";
            if(m<10)
                cout<<"0"<<m<<":";
            else
                cout<<m<<":";
            if(s<10)
                cout<<"0"<<s<<endl;
            else
                cout<<s<<":"<<endl;
        }
        if(n>=270 and n<360) {
            cout<<"De Madrugada!!\n";
            h=(ans/3600)-18;
            ans=(int)ans%3600;
            m=ans/60;
            s=(int)ans%60;
            if(h<10)
                cout<<"0"<<h<<":";
            else
                cout<<h<<":";
            if(m<10)
                cout<<"0"<<m<<":";
            else
                cout<<m<<":";
            if(s<10)
                cout<<"0"<<s<<endl;
            else
                cout<<s<<":"<<endl;
        }
    }
    return 0;
}
