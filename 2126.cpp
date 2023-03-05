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
    int i,pos,num=1,ans;
    string s1,s2,s3;

    while(cin>>s1>>s2) {

        ans=0;
        for(i=0; i<=s2.size()-s1.size(); i++) {
            s3=s2.substr(i,s1.size());
            if(s3==s1) {
                pos=i;
                ans++;
            }
        }

        if(ans>0) {
            printf("Caso #%d:\n",num);
            printf("Qtd.Subsequencias: %d\n",ans);
            printf("Pos: %d\n",pos+1);
        } else {
            printf("Caso #%d:\n",num);
            printf("Nao existe subsequencia\n");
        }

        ans=0;
        num++;
        cout<<endl;
    }
    return 0;
}
