#include<iostream>
using namespace std;
int main()
{
    double a,b,c,sum,large;
    cin>>a>>b>>c;
    sum=a+b+c;
    if(a>=b)
    {
        if(a>=c)
            large=a;
        else
            large=c;
    }
    else if(b>=a)
    {
        if(b>=c)
            large=b;
        else
            large=c;
    }
    double area=(a+b)*c*.5;
    if(large>=sum-large)
        printf("Area = %.1lf",area);
    else
        printf("Perimetro = %.1lf\n",sum);
    return 0;
}
