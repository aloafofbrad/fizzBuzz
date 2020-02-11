/* Brad
Feb 10 2020
Fizz buzz
Thanks for reading */
#include <iostream>
using namespace std;

int main()
{
	cout << "This is a fizz buzz program." << endl;
	int i = 0;
	for (i = 0;i < 100;i++)
	{
		if (i % 3 == 0)
		{
			cout << "fizz" << " ";
		}
		if (i % 5 == 0)
		{
			cout << "buzz" << " ";
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			cout << i;
		}
		cout << endl;
	}
	return 0;
}