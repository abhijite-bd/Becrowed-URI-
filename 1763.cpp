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
    int i,n;
    string s;
    vector<pair<string,string>>v= {{"brasil","Feliz Natal!"},
        {"alemanha","Frohliche Weihnachten!"},
        {"austria","Frohe Weihnacht!"},
        {"coreia","Chuk Sung Tan!"},
        {"espanha","Feliz Navidad!"},
        {"grecia","Kala Christougena!"},
        {"estados-unidos","Merry Christmas!"},
        {"inglaterra","Merry Christmas!"},
        {"australia","Merry Christmas!"},
        {"portugal","Feliz Natal!"},
        {"suecia","God Jul!"},
        {"turquia","Mutlu Noeller"},
        {"argentina","Feliz Navidad!"},
        {"chile","Feliz Navidad!"},
        {"mexico","Feliz Navidad!"},
        {"antardida","Merry Christmas!"},
        {"canada","Merry Christmas!"},
        {"irlanda","Nollaig Shona Dhuit!"},
        {"belgica","Zalig Kerstfeest!"},
        {"italia","Buon Natale!"},
        {"libia","Buon Natale!"},
        {"siria","Milad Mubarak!"},
        {"marrocos","Milad Mubarak!"},
        {"japao","Merii Kurisumasu!"},
    };
    while(cin>>s) {
        int flag=1;
        for(i=0; i<24; i++) {
            if(v[i].first==s) {
                cout<<v[i].second<<endl;
                flag=0;
            }
        }
        if(flag)
            cout<<"--- NOT FOUND ---"<<endl;
    }
    return 0;
}
