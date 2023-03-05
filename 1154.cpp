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
    int a,c=0;
    double s=0;
    while(1) {
        cin>>a;
        if(a<0) {
            if(c==0)
                cout<<0<<endl;
            else
                printf("%.2lf\n",s/c);
            return 0;
        } else {
            s+=a;
            c++;
        }
    }
}
