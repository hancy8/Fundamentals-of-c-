#include<iostream>
using namespace std;
int main(){
	
	int x,y,z;
	cout<<"Enter Number 1"<<endl;
	cin>>x;
	cout<<"Enter Number 2"<<endl;
	cin>>y;
	cout<<"Enter Number 3"<<endl;
	cin>>z;
	
	if(x>=y && x>=z){
		
		cout<<"Greater number is :"<<x;
	}
	
	else if (y>=x && y>=z) {
		cout<<"Greater number is :"<<y;
	}
	
	else if (z>=x && z>=y){
		cout<<"Greater number is :"<<z;
	}
	
	return 0;
}
