#include<bits/stdc++.h>
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
    int t,i,j;
    cin>>t;
    while(t--) {
        string s1,s2;
        cin>>s1>>s2;
        if(s1=="ataque" and s2=="pedra")
            cout<<"Jogador 1 venceu"<<endl;
        else if(s1=="pedra" and s2=="papel")
            cout<<"Jogador 1 venceu"<<endl;
        else if(s2=="papel" and s1=="ataque")
            cout<<"Jogador 1 venceu"<<endl;
        else if(s1=="papel" and s2=="papel")
            cout<<"Ambos venceram"<<endl;
        else  if(s1=="ataque" and s2=="ataque")
            cout<<"Aniquilacao mutua"<<endl;
        else if(s1=="pedra" and s2=="pedra")
            cout<<"Sem ganhador"<<endl;
        else
            cout<<"Jogador 2 venceu"<<endl;
    }
    return 0;
}
