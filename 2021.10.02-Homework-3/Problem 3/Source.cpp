#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{

	int n = 0;
	cin >> n;

	int t = 0;

	for (int i = 1; t <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			if (!(t >= n))
			{
				cout << t + 1 << " ";
			}
			++t;
		}
		cout << endl;
	}

	return EXIT_SUCCESS;
}