#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    double a,s=0;
    cin>>a;
    if(a<=2000)
        cout<<"Isento\n";
    else {
        a=a-2000;
        if(a<=1000) {
            s+=a*.08;
        } else {
            s+=1000*.08;
            a-=1000;
            if(a<=1500) {
                s+=a*.18;
            } else {
                s+=1500*.18;
                a-=1500;
                s+=a*.28;
            }
        }
        printf("R$ %.2lf\n",s);
    }
    return 0;
}
