#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a==0||b==0)
            cout<<0<<endl;
        else
        {
            while(a!=b)
            {
                if(a > b)
                    a -= b;
                else
                    b -= a;
            }
            cout<<a<<endl;
        }
    }
    return 0;
}
