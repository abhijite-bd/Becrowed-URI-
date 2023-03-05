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
    int n,i,j,x,y,z;
    while(cin>>n) {
        queue<int>q;
        stack<int>s;
        priority_queue<int>pq;
        int  flag1=1,flag2=1,flag3=1;

        for(i=0; i<n; i++) {
            cin>>x>>y;
            if(x==1) {
                q.push(y);
                s.push(y);
                pq.push(y);
            } else {
                if(q.front()!=y)
                    flag1=0;
                if(s.top()!=y)
                    flag2=0;
                if(pq.top()!=y)
                    flag3=0;
                q.pop();
                s.pop();
                pq.pop();
            }
        }
        if(flag1+flag2+flag3>1) {
            cout<<"not sure"<<endl;
        } else if(flag1==1)
            cout<<"queue"<<endl;
        else if(flag2==1)
            cout<<"stack"<<endl;
        else if(flag3==1)
            cout<<"priority queue"<<endl;
        else
            cout<<"impossible"<<endl;
    }
    return 0;
}
