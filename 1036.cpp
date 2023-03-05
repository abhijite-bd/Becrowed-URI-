#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double d=(b*b)-4*a*c;
    if(d<0 || a==0)
        cout<<"Impossivel calcular\n";
    else
    {
        d=sqrt(d);
        printf("R1 = %.5lf\n",(-b+d)/(2*a));
        printf("R2 = %.5lf\n",(-b-d)/(2*a));
    }
    return 0;
}
