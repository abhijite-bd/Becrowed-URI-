#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
using namespace std;
int main()
{
    int a[4],i,flag=0;
    for(i=0; i<4; i++) {
        cin>>a[i];
    }
    sort(a,a+4);
    if(a[0]+a[1]>a[2])
        flag=1;
    else if(a[1]+a[2]>a[3])
        flag=1;
    if(flag==0)
        cout<<"N\n";
    else
        cout<<"S\n";
    return 0;
}
