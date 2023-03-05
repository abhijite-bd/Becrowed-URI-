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
    int a,b,inter=0,gremio=0,total=1,draw=0;
    while(1) {
        cin>>a>>b;
        if(a>b)
            inter++;
        else if(a<b)
            gremio++;
        else
            draw++;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        int test;

        cin>>test;
        if(test==2) {
            cout<<total<<" grenais\n";
            cout<<"Inter:"<<inter<<endl;
            cout<<"Gremio:"<<gremio<<endl;
            cout<<"Empates:"<<draw<<endl;
            if(inter>gremio)
                printf("Inter venceu mais\n");
            else if(inter<gremio)
                printf("Gremio venceu mais\n");
            else
                printf("Nao houve vencedor\n");
            return 0;
        }
        total++;
    }

    return 0;
}
