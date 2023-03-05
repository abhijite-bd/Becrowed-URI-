#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    double a,b,c,d,e,total,avg;
    cin>>a>>b>>c>>d;
    total=(a*2+b*3+c*4+d);
    avg=total/10;
    printf("Media: %.1lf\n",avg);
    if(avg>=7)
        cout<<"Aluno aprovado."<<endl;
    else if(avg<5)
        cout<<"Aluno reprovado."<<endl;
    else {
        cout<<"Aluno em exame." <<endl;
        cin>>e;
        printf("Nota do exame: %.1lf\n",e);

        if(avg+e/2>=5)
            cout<<"Aluno aprovado."<<endl;
        else
            cout<<"Aluno reprovado."<<endl;



    printf("Media final: %.1lf\n",(avg+e)/2);

    }
    return 0;
}
