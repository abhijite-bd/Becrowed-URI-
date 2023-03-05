#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    int par[5],impar[5],p=0,ip=0,a[15];
    int i,j=0,k=0,f;
    for(i=0; i<15; i++) {
        cin>>a[i];
    }

    for(i=0; i<15; i++) {
        if(j==5) {
            for(f=0; f<j; f++) {
                cout<<"par["<<f<<"] = "<<par[f]<<endl;
            }
            j=0;
        }
        if(k==5) {
            for(f=0; f<k; f++) {
                cout<<"impar["<<f<<"] = "<<impar[f]<<endl;
            }
            k=0;
        }
        if(a[i]%2==0) {
            par[j]=a[i];
            j++;
        }
        if(a[i]%2!=0) {
            impar[k]=a[i];
            k++;
        }
    }



    for(i=0; i<k; i++) {
        cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
    }
    for(i=0; i<j; i++) {
        cout<<"par["<<i<<"] = "<<par[i]<<endl;
    }
    return 0;
}
