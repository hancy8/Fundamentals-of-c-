#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter temperature in centigrade"<<endl;
cin>>a;
if(a<0){
	cout<<"Freszing weather";
}
else if(a<10){
	cout<<"Very Cold Weather";
}
else if(a<20){
	cout<<"Cold Weather";
}else if(a<30){
	cout<<"Normal in Temprature";
}
else if(a<40){
	cout<<"Its Hot";
}
else if(a>=40){
	cout<<"Its very Hot";
}
else{
	cout<<"invalid input";
}
return 0;
}
