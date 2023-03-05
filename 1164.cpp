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
    long int a,n,i,s=0,t,j;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        for(j=1; j<n; j++) {
            if(n%j==0)
                s+=j;
        }
        if(s==n)
            cout<<n<<" eh perfeito\n";
        else
            cout<<n<<" nao eh perfeito\n";
        s=0;
    }
    return 0;
}
