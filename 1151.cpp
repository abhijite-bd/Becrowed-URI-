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
    int n,i;
    cin>>n;
    ll a[n];
    a[0]=0;
    a[1]=1;
    if(n==1)
        cout<<0<<"\n";
    else if(n==2) {
        cout<<a[0]<<" "<<a[1]<<endl;
    } else {
        cout<<a[0]<<" "<<a[1]<<" ";
        for(i=2; i<n; i++) {
            a[i]=a[i-2]+a[i-1];
            if(i!=n-1)
                cout<<a[i]<<" ";
            else
                cout<<a[i]<<endl;
        }
    }


    return 0;
}
