#include<iostream>
using namespace std;
int main(){
int x,y;
cout<<"Enter value for x "<<endl;
cin>>x;
cout<<"Enter value for y ";
cin>>y;
if(x==0 && y==0){
	cout<<"point is on origion";
}
else if(x>=0 && y>=0){
	cout<<"The point lies in 1st quadrent";
}
else if(x<0 && y>=0){
	cout<<"The point lies in 2nd quadrent";
	}
	else if(x<=0 && y<0){
		cout<<"The point lies in 3rd quadrent";
	}
	else if(x<0 && y<=0){
			cout<<"The point lies in 4rd quadrent";
	}
		else if(x>=0 && y<0){
			
			cout<<"The point lies in 5rd quadrent";
	}
	else{
		cout<<"invalid value";
	}

return 0;
}
