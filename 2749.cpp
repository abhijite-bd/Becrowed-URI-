#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    int n=39,j,i;
    for(i=0; i<7; i++) {
        for(j=0; j<n; j++) {
            if(i==0 or i==6)
                cout<<'-';
            else {
                if(j==0 or j==38)
                    cout<<'|';
                else if(j==1 and i==1) {
                    cout<<"x = 35";
                    j+=5;
                } else if(j==16 and i==3) {
                    cout<<"x = 35";
                    j+=5;
                } else if(j==32 and i==5) {
                    cout<<"x = 35";
                    j+=5;
                } else
                    cout<<ss;
            }
        }
        cout<<endl;
    }
    return 0;
}

