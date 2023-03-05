//#include<iostream>
//#include<math.h>
//#include<algorithm>
//#include<string>
//#include<array>
//#include<vector>
//#include<queue>
//#include<set>
//#include<map>
//#define   ll long long int
//#define   gcd(a,b)   __gcd(a,b)
//#define   lcm(a,b)   (a*b)/gcd(a,b)
//#define   ss " "
//#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
//#define   max3(a,b,c) max(max(a,b),c)
//#define   min3(a,b,c) min(min(a,b),c)
//using namespace std;
//int main()
//{
//    int n,m,x,y,t,i,j;
//    cin>>x>>t;
//    char a,b;
//    map<char,char> mp;
//    for(i=0; i<x; i++) {
//        cin>>a>>b;
//        mp[a]=b;
//        mp[b]=a;
//    }
//    cin.ignore();
//    while(t--) {
//        string s;
//        getline(cin,s);
//        n=s.size();
//
//        for(i=0; i<n; i++) {
//            auto it=mp.find(s[i]);
//            if(it!=mp.end())
//                cout<<it->second;
//            else
//                cout<<s[i];
//        }
//        cout<<endl;
//    }
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s;
    getline (cin, s);
    map<char,char> mp;
    string x,y;
    char a,b;
    for(int i=0; i<n; i++) {
        cin>>x>>y;
        a=x[0];
        b=y[0];
        mp[a]=b;
        mp[b]=a;
    }

    getline (cin, s);
    string str;
    map<char,char>::iterator it;
    while(m--) {
        getline(cin,str);
        for(int i=0; i<str.length(); i++) {
            it=mp.find(str[i]);
            if(it!=mp.end())
                cout<<it->second;
            else
                cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
