#include<iostream>
using namespace std;
int main(){

int x,y,z;
cout<<"Enter 1st side of traingle"<<endl;
cin>>x;
cout<<"Enter 2st side of traingle"<<endl;
cin>>y;
cout<<"Enter 3st side of traingle"<<endl;
cin>>z;

if (x==y && x==z){
	cout<<"Traingle is Equilateral";
}

else{
	
	cout<<"Traingle is not equilateral";
}

return 0;
}
