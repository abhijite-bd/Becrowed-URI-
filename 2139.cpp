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
    int a,b,ans,i;
    int c[]= {31,29,31,30,31,30,31,31,30,31,30,31};

    while(cin>>a>>b) {
        if(a==12 and b==25)
            cout<<"E natal!"<<endl;
        else if(a==12 and b==24)
            cout<<"E vespera de natal!"<<endl;
        else if(a==12 and b>25)
            cout<<"Ja passou!"<<endl;
        else {
            ans=c[a-1]-b;
            a--;
            for(i=0; i<12; i++) {
                if(a<i)
                    ans+=c[i];
            }
            printf("Faltam %d dias para o natal!\n",ans-6);
        }
    }
    return 0;
}
