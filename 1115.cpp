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
    int n,i,mx,mi,a,b,sum=0,j;
    while(1) {
        cin>>a>>b;
        if(a==0 or b==0)
            return 0;
        if(a>0 and b>0)
            cout<<"primeiro\n";
        else if(a>0 and b<0)
            cout<<"quarto\n";
        else if(a<0 and b<0)
            cout<<"terceiro\n";
        else if(a<0 and b>0)
            cout<<"segundo\n";
    }
    return 0;
}



