#include<iostream>
using namespace std;
int main()
{ 
char a;
cout<<"Enter a Characterr"<<endl;
cin>>a;
if (a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U')
{
	cout<<"You Enter a vowel";
}
else {
	cout<<"Your enterd Character is not vowel";
}

return 0;
}


