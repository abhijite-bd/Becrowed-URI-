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
    int n,i,a;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a;
        if(a%2==0)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}
