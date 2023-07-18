#include <iostream>
using namespace std;
main()
{
    int i,sum = 0;
    cout <<"Find the first 10 natural numbers: ";
    cout << " Natural numbers are: \n";
    for (i = 1; i <= 10; i++) 
    {
        cout << i << " ";
		sum=sum+i;
    }
     cout << "\n Sum of first 10 numbers: "<<sum << endl;
}

