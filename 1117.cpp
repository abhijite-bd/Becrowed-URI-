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
    double a,s=0,c=0;
    while(1) {
        cin>>a;
        if(a<0 or a>10) {
            cout<<"nota invalida\n";
        } else {
            c++;
            s+=a;
            if(c==2) {
                printf("media = %.2lf\n",s/2);
                return 0;
            }
        }
    }
}




