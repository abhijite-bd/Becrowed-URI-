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
    double a,b;
    cin>>a>>b;
    if(a+b==0)
        cout<<"Origem\n";
    else if(a==0)
        cout<<"Eixo Y"<<endl;
    else if(b==0)
        cout<<"Eixo X"<<endl;
    else if(a>0 and b>0)
        cout<<"Q1\n";
    else if(a<0 and b>0)
        cout<<"Q2\n";
    else if(a<0 and b<0)
        cout<<"Q3\n";
    else if(a>0 and b<0)
        cout<<"Q4\n";

    return 0;
}
