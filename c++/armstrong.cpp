#include<iostream>
#include<iomanip>
#include<string>
//#include<stdlib>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int n,m,r,u,t;
    double k,sum=0,count=0;
    cout<<"ENTER THE NUMBER: ";
    cin>>n;
    m=n;
    u=n;
    while(u>0)
    {
        t = u%10;
        count = count+1;
        u=u/10;
    }
    while(n>0)
    {
        r=n%10;
        k = pow(r,count);
        sum = sum+k;
        n=n/10;
    }
    if(m==sum)
    {
        cout<<"IT'S AN ARMSTRONG NUMBER: "<<endl;
    }
    else
    {
        cout<<"IT IS NOT AN ARMSTRONG NUMBER: "<<endl;
    }

}
