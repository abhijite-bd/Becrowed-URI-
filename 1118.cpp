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
    double a,b=0,s=0,c;
    while (1) {
        cin>>a;
        if(a < 0.0 || a > 10.0)
            printf("nota invalida\n");
        else {
            b++;
            s+=a;
            if(b==2) {
                printf("media = %.2lf\n",s/2);
                cout<<"novo calculo (1-sim 2-nao)"<<endl;
                while(1) {
                    cin>>c;
                    if(c==1 or c==2)
                        break;
                    else
                        cout<<"novo calculo (1-sim 2-nao)"<<endl;
                }
                if(c==2)
                    return 0;
                else {
                    b=0;
                    s=0;
                    continue;
                }
            }
        }
    }
}
