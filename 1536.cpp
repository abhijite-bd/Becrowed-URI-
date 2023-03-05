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
    int n,a1,a2,b1,b2,i,x,y;
    cin>>n;
    for(i=0; i<n; i++) {
        scanf("%d x %d",&a1,&a2);
        scanf("%d x %d",&b1,&b2);
        if(a1==b1 and a2==b2)
            cout<<"Penaltis"<<endl;
        else if(a1-a2>b1-b2)
            cout<<"Time 1"<<endl;
        else if(a1-a2<b1-b2)
            cout<<"Time 2"<<endl;
        else if(a1-a2==b1-b2) {
            if(a1<b1)
                cout<<"Time 1"<<endl;
            else
                cout<<"Time 2"<<endl;
        }
    }
    return 0;
}
