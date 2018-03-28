#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double n[100000],s=0,k=0,tb,x[100];
    int t=0,i,j=1;
    while(cin>>n[j])
    {
        t++;
        s=s+n[j];
        j++;
    }
    tb=(s*1.00)/(1.00*t);
    for(i=1;i<=t;i++)
    {
        x[i]=(n[i]-tb)*(n[i]-tb);
        k=k+x[i];
    }
    cout<<fixed<<setprecision(2)<<tb;
    cout<<"\n";
    cout<<fixed<<setprecision(2)<<(k*1.00)/((t*1.00));
}
