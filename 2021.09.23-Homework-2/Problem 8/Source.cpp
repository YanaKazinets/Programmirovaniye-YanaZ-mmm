#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;

	int a2 = a * a;
	int b2 = b * b;
	int c2 = c * c;

	if (!(a >= b + c) && !(b >= c + a) && !(c >= a + b)) 
	{
		if (a2 == b2 + c2 || b2 == a2 + c2 || c2 == a2 + b2)
		{
			cout << "right" << endl;
		}
		else if (a2 > b2 + c2 || b2 > a2 + c2 || c2 > a2 + b2)
		{
			cout << "obtuse" << endl;
		}
		else
		{
			cout << "actue" << endl;
		}
	}
	else
	{
		cout << "impossible" << endl;
	}

	return EXIT_SUCCESS;
}