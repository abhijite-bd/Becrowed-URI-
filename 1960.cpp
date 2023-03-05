#include<iostream>
using namespace std;
string s="\0";
void first(int d)
{
    if(d==1)
        s="C";
    else if(d==2)
        s="CC";
    else if(d==3)
        s="CCC";
    else if(d==4)
        s="CD";
    else if(d==5)
        s="D";
    else if(d==6)
        s="DC";
    else if(d==7)
        s="DCC";
    else if(d==8)
        s="DCCC";
    else if(d==9)
        s="CM";
}
void second(int d)
{
    if(d==1)
        s+="X";
    else if(d==2)
        s+="XX";
    else if(d==3)
        s+="XXX";
    else if(d==4)
        s+="XL";
    else if(d==5)
        s+="L";
    else if(d==6)
        s+="LX";
    else if(d==7)
        s+="LXX";
    else if(d==8)
        s+="LXXX";
    else if(d==9)
        s+="XC";
}
void third(int d)
{
    if(d==1)
        s+="I";
    else if(d==2)
        s+="II";
    else if(d==3)
        s+="III";
    else if(d==4)
        s+="IV";
    else if(d==5)
        s+="V";
    else if(d==6)
        s+="VI";
    else if(d==7)
        s+="VII";
    else if(d==8)
        s+="VIII";
    else if(d==9)
        s+="IX";
}
int main()
{
    int n;
    cin>>n;
    int d=0,r=0;
    d=n/100;
//    cout<<d<<endl;
    n=n%100;
    first(d);
    d=n/10;
//    cout<<d<<endl;
    n=n%10;
    second(d);
    third(n);
//    cout<<n<<endl;
    cout<<s<<endl;
}
