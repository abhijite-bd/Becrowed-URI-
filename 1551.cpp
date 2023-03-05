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
    int t,i,n,j;
    cin>>t;
    cin.ignore();
    while(t--) {
        set<char> a;
        string s;
        getline(cin,s);
        n=s.size();
        for(i=0; i<n; i++) {
            if(isalpha(s[i]))
                a.insert(s[i]);
        }
//        cout<<a.size()<<endl;
        if(a.size()==26)
            cout<<"frase completa"<<endl;
        else if(a.size()>=13)
            cout<<"frase quase completa"<<endl;
        else
            cout<<"frase mal elaborada"<<endl;
    }
    return 0;
}
