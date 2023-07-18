#include <iostream>
using namespace std;
int main()
{ 

int size;

cout<<"Enter size :"<<endl;
cin>>size;
for(int i=1; i<=size; i++){
	
	for(int j=1; j<=size; j++){
		if (i==j || j==(size+1-i))
		cout<<"*";
		else
		cout<<" ";
	}
	
	cout<<endl;
}
return 0;
}
