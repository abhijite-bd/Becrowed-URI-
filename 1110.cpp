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
    int n,i,j,last,fst,ans;
    while(cin>>n) {
        if(n==0)
            return 0;
        queue<int>q;
        for(i=1; i<=n; i++) {
            q.push(i);
        }
        cout<<"Discarded cards:";
        for(i=0; i<n-1; i++) {
            cout<<" "<<q.front();
            (i==n-2?cout<<"\n":cout<<',');
            q.pop();
            int d=q.front();
            q.pop();
            q.push(d);
        }
        cout<<"Remaining card: "<<q.front()<<endl;
    }
    return 0;
}
