#include <iostream>
using namespace std;
int main()
{
    int num1, num2, r, sum=0;
    cout << " Input a number: ";
    cin >> num1;
    num2 = num1;
    for (int i=0;i<=num1;i++) 
    {
	    if(num1 >= 0)
	    {
            r = num1 % 10;
            num1 = num1 / 10;
            sum = sum + r;
            i=0;
	    }
    }
    cout << " The sum of digits of " << num2 << " is: " << sum << endl;
}_
