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
//bool compare(string a,string b)
//{
//    return (a.length()<=b.length());
//}
//int main()
//{
//    int t,i,n,j,x,y;
//    cin>>t;
//    cin.ignore();
//    while(t--) {
//        string s,s2;
//        getline(cin,s);
//        string v[100];
//        n=s.size();
//        x=0;
//        j=0;
//        for(i=0; i<=n; i++) {
//            if(s[i]==' ' or s[i]=='\0') {
//                y=i-x;
//                s2=s.substr(x,y);
//                v[j]=s2;
//                x=i+1;
//                j++;
//            }
//        }
//        stable_sort(v,v+j,compare);
//        reverse(v,v+j);
//        for(i=0; i<j; i++) {
//            cout<<v[i];
//            if(i!=n-1)
//                cout<<" ";
//        }
//        cout<<endl;
//    }
//    return 0;
//}
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

string arr[51];
int x;

bool compare(string a, string b) { return (a.length() <= b.length()); }

void split(string word)
{
 int size = word.length();
 int i = 0, x = 0, j = 0;
 string s;

 while(i <= size)
 {
  if(word[i] == ' ' || word[i] == '\0'){
   s = word.substr(j, i - j);
   arr[x] = s;
   j = i + 1;
   x++;
  }
  i++;
 }

 stable_sort(arr, arr + x, compare);
 reverse(arr, arr + x);

 for (i = 0; i < x; ++i)
 {
  cout << arr[i];
  if(i != (x - 1))
   cout << " ";
 }

 cout << endl;
}

int main(int argc, char const *argv[])
{
 int n, i;
 string word;

 cin >> n; cin.ignore();

 while(n--)
 {
  getline(cin, word);
  split(word);
 }

 return 0;
}
