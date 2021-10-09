#include<iostream>
#include<iomanip>
#include<string>
//#include<stdlib>
#include<cmath>
using std::string;
using std::cout;
using std::cin;
using std::endl;

double area(double len,double width)
{
    return len*width;
}
double area(double side)
{
    return side*side;
}
double area(double a,double b,double c)
{
    double s;
    s =(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    string yup;
    double x,y,z;
    cout<<"TO FIND THE AREA OF RECTANGLE,TRIANGLE OR SQUARE"<<endl;
    cout<<"ENTER THE FIGURE NAME(IN SMALL LETTERS): ";
    cin>>yup;
    if(yup=="rectangle")
    {
        cout<<"ENTER THE LENGTH AND WIDTH: ";
        cin>>x>>y;
        cout<<"THE AREA OF RECTANGLE IS: "<<area(x,y)<<endl;

    }
    else if(yup=="square")
    {
        cout<<"ENTER THE SIDE: ";
        cin>>x;
        cout<<"THE AREA OF SQUARE IS: "<<area(x)<<endl;
    }
    else if(yup=="triangle")
    {
        cout<<"ENTER THE SIDES OF TRIANGLE: ";
        cin>>x>>y>>z;
        cout<<"THE AREA OF TRIANGLE IS: "<<area(x,y,z)<<endl;
    }
    else
    {
        cout<<"INVALID INPUT!!!"<<endl;
    }
}
