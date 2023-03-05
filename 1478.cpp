//#include<bits/stdc++.h>
//#include<math.h>
//#include<algorithm>
//#include<string>
//#include<array>
//#include<vector>
//#include<queue>
//#include<set>
//#define   ll long long int
//#define   gcd(a,b)   __gcd(a,b)
//#define   lcm(a,b)   (a*b)/gcd(a,b)
//#define   ss " "
//#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
//#define   max3(a,b,c) max(max(a,b),c)
//#define   min3(a,b,c) min(min(a,b),c)
//using namespace std;
//int main()
//{
//    int n,i,j;
//    while(cin>>n and n!=0) {
//        int a[n+1][n+1];
//        for(i=1; i<=n; i++) {
//            int eq=0,tot=0,x;
//            for(j=1; j<=n; j++) {
//                if(i==j) {
//                    x=1;
//                    eq=1;
//                    tot=i+j;
//                }
//                if(i+j>tot and eq) {
//                    x=i+j-tot+1;
//                }
//                if(!eq and j==1)
//                    x=i+j-1;
//                if(!eq and j!=1)
//                    x--;
//                a[i][j]=x;
//            }
//        }
//        for(i = 1; i <= n; i++) {
//            for(j = 1; j <= n; j++) {
//                printf("%3d",a[i][j]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//    return 0;
//}
#include<stdio.h>

int main()
{
    int i,j,k,l,m,n;
    for(;;){
        scanf("%d",&n);
        if(n==0)break;
        int arr[n][n];
        for(i = 0;i < n;i++){
            m = i+1;
            k=2;
            for(j = 0;j <= i;j++,m--){
                arr[i][j]=m;
            }
            for(j = i+1;j < n;j++,k++){
                arr[i][j]=k;
            }
        }
        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                if(j==0)printf("%3d",arr[i][j]);
                else printf(" %3d",arr[i][j]);
            }printf("\n");
        }printf("\n");

    }
    return 0;
}
