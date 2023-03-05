#include<bits/stdc++.h>
using namespace std;
main()
{

    int t,n,i,c,b;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n];
c=0;
    b=0;
        for(i=0;i<n;i++)cin>>a[i];
        for(i=1;i<n;i++)
        {
            if(a[i]==1&&a[i-1]==0)
            {
                c+=(i-b);
                cout<<c<<"**"<<endl;
            }

            if(a[i]==1) b=i;

            cout<<b<<endl;
        }

        cout<<c<<endl;
    }
    return 0;
}
