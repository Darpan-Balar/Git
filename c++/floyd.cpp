#include<iostream>
#include<iomanip>
//#include<stdlib>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int n;
    cout<<"ENTER THE NO. OF ROWS: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<1;
            }
            else
            {
                cout<<0;
            }
        }
        cout<<endl;
    }
}
