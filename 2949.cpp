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
    string s;
    char c;
    int n,i,hob=0,hum=0,el=0,an=0,mag=0;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>s>>c;
        if(c=='X')
            hob++;
        else if(c=='M')
            mag++;
        else if(c=='H')
            hum++;
        else if(c=='E')
            el++;
        else if(c=='A')
            an++;

    }
    printf("%d Hobbit(s)\n%d Humano(s)\n%d Elfo(s)\n%d Anao(s)\n%d Mago(s)\n",hob,hum,el,an,mag);
    return 0;
}
