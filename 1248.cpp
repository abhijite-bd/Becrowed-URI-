//#include<iostream>
//#include<math.h>
//#include<algorithm>
//#include<cstring>
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
//    int t,n,l1,l2,l3,i,j,flag;
//    cin>>t;
//    cin.ignore();
//    while(t--) {
//        string s1,s2,s3;
//        cin>>s1;
//        cin>>s2;
//        cin>>s3;
//
//        string s4=s2+s3;
//        l1=s1.size();
//        l2=s4.size();
//        if(l1>0)
//            sort(s1.begin(), s1.end());
//        if(l2>0)
//            sort(s4.begin(), s4.end());
//
//        flag=0;
//
//        if(l2>l1)
//            cout<<"CHEATER"<<endl;
//        else {
//
//            for(i=0; i<l2; i++) {
//                for(j=0; j<l1; j++) {
//                    if(s4[i]==s1[j]) {
//                        s1.erase(s1.begin()+j);
//                        flag++;
//
//                    }
//                }
//            }
//            if(flag==l2)
//                cout<<s1<<endl;
//            else
//                cout<<"CHEATER"<<endl;
//
//        }
//    }
//    return 0;
//}

//#include<iostream>
//#include<math.h>
//#include<algorithm>
//#include<cstring>
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
//int t,l1,l2,i,j;
//cin>>t;
//cin.ignore();
//while(t--){
//string s1,s2,s3,s4;
//
//getline(cin,s1);
//getline(cin,s2);
//getline(cin,s3);
//
//
//    cout<<s1<<endl;
//    cout<<s2<<endl;
//    cout<<s3<<endl;
//}
//return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string str;
        string break_fast,lunch;
        getline(cin,str);
        getline(cin,break_fast);
        getline(cin,lunch);
        string add=break_fast+lunch;
        bool chet=false;
        for(int i=0;i<add.length();i++)
        {
            bool x=false;
            for(int j=0;j<str.length();j++)
            {
                if(str[j]==add[i])
                {
                    x=true;
                }
            }
            if(!x){
                chet=true;
                break;
            }
        }
        if(chet)
        {
            cout<<"CHEATER\n";
        }
        else
        {
            string dinner;
            for(int i=0;i<str.length();i++)
        {
            bool x=false;
            for(int j=0;j<add.length();j++)
            {
                if(str[i]==add[j])
                {
                    x=true;
                }
            }
            if(!x){
                //cout<<str[i];
                dinner=dinner+str[i];
            }
        }
        sort(dinner.begin(),dinner.end());
        cout<<dinner;
        cout<<endl;
        }

    }
    return 0;
}
