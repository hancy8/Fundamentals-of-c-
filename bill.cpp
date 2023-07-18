#include<iostream>
using namespace std;
int main(){
int a,c;
float b;
string name;
cout<<"Enter your Customer id"<<endl;
cin>>a;
cout<<"Enter your name"<<endl;
cin>>name;
cout<<"Enter your unit consumed"<<endl;
cin>>c;
if(c<=199){
	b=c*1.20;
	cout<<"your total bill is "<<b;
}
else if(c>=200 && c<400){
	 b=c*1.50;
cout<<"Your total bill is "<<b;
}
else if(c>=400 && c<600){
	 b=c*1.80;
cout<<"Your total bill is "<<b;
}
else{
	b=c*2.00;
	cout<<"Your total bill is "<<b;
}

}
