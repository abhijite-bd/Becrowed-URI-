#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int a,b,c,d,m,h;
    cin>>a>>b>>c>>d;
    if(d<b) {
        m=d+60-b;
        a++;
    } else
        m=d-b;
    h=c-a;
    if(h<0)
        h+=24;
    if(m==0&&h==0)
        h=24;
    cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
    return 0;
}
