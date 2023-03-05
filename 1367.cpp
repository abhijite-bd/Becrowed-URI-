//#include<iostream>
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
//    int a,ans,total,i,n;
//    while(cin>>n and n!=0) {
//        total=0;
//        ans=0;
//        char c,s[20];
//        vector <int>v1(26,0),v2(26,0);
//        for(i=0; i<n; i++) {
//            cin>>c>>a>>s;
//            if(s[0]=='c') {
//                ans++;
//                v1[c-'A']=a;
//            }
//            if(s[0]=='i')
//                v2[c-'A']+=20;
//        }
//
////        if(s[0]=='i' and ans>0)
////            ans--;
//        for(i=0; i<ans; i++) {
//            total+=v1[i]+v2[i];
//        }
//        cout<<ans<<ss<<total<<endl;
//
//    }
//    return 0;
//}
#include <stdio.h>
#include <string.h>
int inc[26];
int cor[26];
int main(int argc, char const *argv[])
{
    int n, t, i, s, p;
    char c, str[20];
    while(scanf("%d", &n) && n)
    {
        s = 0; p = 0;
        memset(inc, 0, sizeof(inc));
        memset(cor, 0, sizeof(cor));
        for (i = 0; i < n; ++i)
        {
            getchar();
            scanf("%c %d %s", &c, &t, &str);
            if(strcmp("correct", str) == 0 && cor[(int)c - 65] == 0)
                cor[(int)c - 65] = t;
            if(strcmp("incorrect", str) == 0 && cor[(int)c - 65] == 0)
                inc[(int)c - 65] += 20;
        }
        for (i = 0; i < 26; ++i)
        {
            if(cor[i] != 0){
                s++;
                p += (cor[i] + inc[i]);
            }
        }
        printf("%d %dn", s, p);
    }
    return 0;
}
