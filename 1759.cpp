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
    long int i,n;
    cin>>n;
    for(i=0; i<n; i++) {
        if(i==n-1)
            cout<<"Ho!\n";
        else
            cout<<"Ho ";
    }
    return 0;
}
