#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int n,i,a=0,b=0,c=0,x;
    while(1) {
        cin>>x;
        if(x==4)
            break;
        else if(x==1)
            a++;
        else if(x==2)
            b++;
        else if(x==3)
            c++;
    }
    cout<<"MUITO OBRIGADO\n";
    cout<<"Alcool: "<<a<<endl;
    cout<<"Gasolina: "<<b<<endl;
    cout<<"Diesel: "<<c<<endl;
    return 0;
}
