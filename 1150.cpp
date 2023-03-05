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
    int i,c=0,a,b,s=0;
    cin>>a;
    while(1) {
        cin>>b;
        if(b>a)
            break;
    }
    for(i=a; s<b; i++) {
        s+=i;
        c++;
    }
    cout<<c<<endl;
    return 0;
}
