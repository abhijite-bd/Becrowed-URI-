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
    int i,x,k=1;
    string s,sts,sub,n;
    while(cin>>n) {
        if(k!=1)
            cout<<endl;
        cin.ignore();
        getline(cin,s);
        stringstream sts;
        sts<<s;
        vector<string>v;
        while(sts>>sub)
            v.pb(sub);
        i=0;
        int f=0,m=0;
        for(auto y:v) {
            if(y==n) {
                i=1;
            } else if(i==1) {
                if(y=="F")
                    f++;
                else
                    m++;
                i=0;
            }
        }
        printf("Caso %d:\n",k);
        printf("Pares Iguais: %d\n",(m+f));
        printf("F: %d\n",f);
        printf("M: %d\n",m);
        k++;
    }
    return 0;
}
