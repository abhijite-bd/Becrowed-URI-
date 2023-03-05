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
    ll n,i,sum=1;
    cin>>n;
    for(i=1; i<=n; i++) {
        sum*=i;
    }
    cout<<sum<<endl;
    return 0;
}
