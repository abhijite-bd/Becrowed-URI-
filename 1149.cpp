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
    int sum=0;
    int a,n,i;
    cin>>a;
    while(1) {
        cin>>n;
        if(n>0)
            break;
    }
    for(i=a; i<a+n; i++) {
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
