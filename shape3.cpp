#include <iostream>
using namespace std;
int main()
{
	
		for(int i=1; i<=4; i++)
	{
		
		
		for(int j=1; j<=4-i; j++)
		{
			
		//	cout
			cout<<" ";
		}
		
		for(int k=1; k<=i*2-1; k++)
		{
		
		cout<<"a";
		
		}
		
		cout<<endl;
	}
	
	for(int i=1; i<=4; i++)
	{
		
		
		for(int j=1; j<=0+i; j++)
		{
			
		//	cout
			cout<<" ";
		}
		
		for(int k=5; k>=i*2-1; k--)
		{
		
		cout<<"a";
		
		}
		
		cout<<endl;
	}
	return 0;
}
