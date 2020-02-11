#include iostream
using namespace std;

int main()
{
	cout << "Hello world!\nThis is now a fizz buzz program." << endl;
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