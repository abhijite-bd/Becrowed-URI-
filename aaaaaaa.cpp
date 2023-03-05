#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,i,a,c,b;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n];
        int flag=0,one=0;
        for(i=0; i<n; i++) {
            cin>>a[i];
            if(a[i]==1)
                one++;
        }
        int ans=n;
        if(one==n)
            ans=0;
        if(a[n-1]==1 and a[n-2]==1)
            ans-=2;
        else
            ans--;
        cout<<ans<<endl;

    }
    return 0;
}
