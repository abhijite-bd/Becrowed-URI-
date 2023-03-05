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
    int i,n;
    cin>>n;
    for(i=1; i<=n; i++) {
        cout<<pow(i,1)<<" "<<pow(i,2)<<" "<<pow(i,3)<<endl;
    }
    return 0;
}
