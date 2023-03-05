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
    double d,a,b,n,i;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a>>b;
        if(b==0)
            cout<<"divisao impossivel\n";
        else
            printf("%.1lf\n",a/b);
    }
    return 0;
}
