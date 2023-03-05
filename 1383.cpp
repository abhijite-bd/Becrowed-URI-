#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
int main()
{
    int i,j,n,k,x;
    cin>>n;
    for(k=0; k<n; k++) {
        int flag=1;
        int a[10][10];
        for(i=0; i<9; i++) {
            set<int>s;
            for(j=0; j<9; j++) {
                cin>>a[i][j];
                s.insert(x);
            }
            cout<<s.size()<<endl;
            if(s.size()!=9)
                flag=0;
            s.clear();
        }
        if(k>0)
            cout<<endl;
        if(flag) {
            printf("Instancia %d\n",k+1);
            printf("SIM\n");
        } else {
            printf("Instancia %d\n",k+1);
            printf("NAO\n");
        }

    }
    return 0;
}
