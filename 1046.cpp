#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
        cout<<"O JOGO DUROU "<<24 <<" HORA(S)\n";
    else if(a>b)
        cout<<"O JOGO DUROU "<<24+b-a <<" HORA(S)\n";
    else
        cout<<"O JOGO DUROU "<<b-a <<" HORA(S)\n";
    return 0;
}
