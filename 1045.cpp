#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    double a,b,c,m,n,o;
    cin>>a>>b>>c;
    if(a>=b) {
        if(a>=c) {
            m=a;
            n=b;
            o=c;
        } else {
            m=c;
            n=a;
            o=b;
        }
    } else if(b>=a) {
        if(b>=c) {
            m=b;
            n=a;
            o=c;
        } else {
            m=c;
            n=b;
            o=a;
        }
    }
    if(m>=n+o)
        cout<<"NAO FORMA TRIANGULO"<<endl;
    else {
        if(m*m==n*n+o*o)
            cout<<"TRIANGULO RETANGULO"<<endl;
        else if(m*m>n*n+o*o)
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        else if(m*m<n*n+o*o)
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        if(m==n||n==o||m==o) {
            if(m==n and n==o)
                cout<<"TRIANGULO EQUILATERO"<<endl;
            else
                cout<<"TRIANGULO ISOSCELES"<<endl;
        }
    }

    return 0;
}
