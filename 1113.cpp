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
        if(a==b)
            return 0;
        a>b?cout<<"Decrescente\n":cout<<"Crescente\n";
    }
    return 0;
}


