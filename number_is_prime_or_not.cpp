#include <iostream>
using namespace std;
main()
{
	cout<<"Enter a number to check it is prime number or not\n";
	int num,count=0;
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
		if(count==2)
		{
			cout<<"it is a prime number";
		}
		else
		{
			cout<<"it is not a prime number";
		}
	
	
}
