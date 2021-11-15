#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;

	int i = 0;
	while (a*i <= a * b)
	{
		++i;
		if ((a * i) % b == 0)
		{
			cout << a * i << endl;
			i = b + 1;
		}
	}

	return EXIT_SUCCESS;
}