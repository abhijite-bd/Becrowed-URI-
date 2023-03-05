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
    int n,g,d,i,win,x,y,ans,draw;
    while(cin>>n>>g) {
        win=0;
        draw=0;
        vector<int>v;
        for(i=0; i<n; i++) {
            cin>>x>>y;
            if(x>y)
                win++;
            else {
                d=y-x+1;
                v.pb(d);
            }
        }
        sort(v.begin(),v.end());
        for(i=0; i<v.size(); i++) {
            if(g>=v[i]) {
                win++;
                g-=v[i];
            } else if(v[i]==1)
                draw++;
                else
                    break;
        }
        cout<<win*3+draw<<endl;
    }
    return 0;
}
//#include<bits/stdc++.h>
//using  namespace std;
//int main()
//{
//    int match,buy;
//    while(cin>>match>>buy) {
//        vector<int> diff;
//        int a,b;
//        int point=0;
//        for(int i=0; i<match; i++) {
//            cin>>a>>b;
//            if(a==b)point+=1;
//            if(a>b)point+=3;
//            if(b-a<0)
//                diff.push_back(11111111);
//            else diff.push_back(b-a);
//
//        }
//        sort(diff.begin(),diff.end());
//        int I=0;
//
//        while(buy>0&&I<match) {
//            int d=buy-diff[I];
//            if(d<0) {
//
//            } else if(d==buy) {
//                buy--;
//                point+=2;
//            } else if(d==0) {
//                buy--;
//                point+=1;
//            } else {
//                buy=buy-diff[I];
//                if(buy>0) {
//                    buy--;
//                    if(diff[I]==11111111)
//                        point+=2;
//                    else point+=3;
//                } else {
//                    point+=1;
//                }
//            }
//            I++;
//        }
//        cout<<point<<endl;
//    }
//    return 0;
//}
