#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter Height in centimeters ";
cin>>a;
if (a<150){
	cout<<"Dwarf ";
}
else if(a==150){
	cout<<"Avg Height ";
}
else {
	cout<<"Tall" ;
}

return 0;
}
