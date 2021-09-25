#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;

	if (a == 0 && b == 0)
	{
		cout << "INF" << endl;
	}
	else if (b % a == 0)
	{
		if (d % c == 0 && b / a == d / c)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << (-b) / a << endl;
		}
	}
	else
	{
		cout << "NO" << endl;
	}

		return EXIT_SUCCESS;
}