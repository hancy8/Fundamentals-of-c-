#include<iostream>
using namespace std;
int main()
{
int a, b, c;
cout<<"Enter fisrt number: "<<endl;
cin>>a;
cout<<"Enter second number: "<<endl;
cin>>b;
cout<<"Enter third number: "<<endl;
cin>>c;

if (a<=b && a<=c)
{
	cout<<"Smallest Number is: "<<a;
}

if (b<=c && b<=a)
{
	cout<<"Smallest Number is: "<<b;
}

if (c<=b && c<=a)
{

cout<<"Smallest Number is: "<<c;
}

return 0;

}


