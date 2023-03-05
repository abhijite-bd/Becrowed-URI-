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
    int i,a;
    while(1) {
        cin>>a;
        if(a==0)return 0;
        else {
            for(i=1; i<=a; i++) {
                if(i==a)
                    cout<<i<<endl;
                else
                    cout<<i<<" ";
            }
        }
    }

}
