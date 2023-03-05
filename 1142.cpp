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
    int i,j=1,k=1,n;
    cin>>n;
    for(i=0; i<n; i++) {
        k=j;
        for(j=k; j<k+4; j++) {
            if(j%4==0) {
                cout<<"PUM\n";
            } else
                cout<<j<<" ";
        }
    }
    return 0;
}
