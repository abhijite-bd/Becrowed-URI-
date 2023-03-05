#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int n,sum,c=0,s=0,r=0,i,a;
    char ch,d='%';
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a>>ch;
        if(ch=='C')
            c+=a;
        else if(ch=='R')
            r+=a;
        else if(ch=='S')
            s+=a;
    }
    sum=c+r+s;
    cout<<"Total: "<<sum<<" cobaias\n";
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    printf("Percentual de coelhos: %.2lf %c\n",c*100.00/sum,d);
    printf("Percentual de ratos: %.2lf %c\n",r*100.00/sum,d);
    printf("Percentual de sapos: %.2lf %c\n",s*100.00/sum,d);
    return 0;
}
