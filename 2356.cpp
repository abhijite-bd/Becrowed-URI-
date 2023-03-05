//#include<bits/stdc++.h>
//
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
//    string s1,s2;
//    int flag,n,i,j,k;
//    while(cin>>s1>>s2) {
//        n=s2.size();
//        flag=0;
//        for(i=0; i<s1.size(); i++) {
//            flag=0;
//            if(s1[i]==s2[0]) {
//                for(j=i,k=0; j<n; j++,k++) {
//                    if(s1[j]==s2[k]) {
//                        flag=1;
//                    } else {
//                        flag=0;
//                        break;
//                    }
//                }
//            }
//            if(flag)
//                break;
//        }
//        if(flag)
//            cout<<"Resistente"<<endl;
//        else
//            cout<<"Nao resistente"<<endl;
//    }
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y;
    while(cin>>x>>y){
            bool X=false;
    for(int i=0;i<x.length();i++)
    {
        X=false;
        if(x[i]==y[0])
        {
            for(int j=i,k=0;k<y.length();j++,k++)
            {
                if(x[j]==y[k])
                {
                    X=true;
                }
                else
                {
                    X=false;
                    break;
                }
            }
        }
        if(X)
            break;
    }
    if(X)
        cout<<"Resistente\n";
    else
        cout<<"Nao resistente\n";
    }
    return 0;
}
