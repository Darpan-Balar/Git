#include<iostream>
#include<iomanip>
//#include<stdlib>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int n,i,j,k,m=1;
    cout<<" ENTER THE ORDER OF MATRIX: ";
    cin>>n;
    int l=i;
    cout<<"YOUR SYMMETRIC SQUARE MATRIX LOOKS LIKE: "<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                cout<<0<<" ";
            }
            else if(j>i)
            {
                cout<<m<<" ";
                m=m+1;
            }
            else
            {
                cout<<l<<" ";
                l=l-1;
            }

        }
        m=1;
        l=i;
        cout<<endl;
    }

}
