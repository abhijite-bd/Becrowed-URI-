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
    int i,j,n,t;
    cin >>n;
    cin >> t;

    for(int i = 1; i <= t; i++) {
        if(i%n==0)
            cout<<i<<endl;
        else
            cout<<i<<" ";
    }
    return 0;
}
