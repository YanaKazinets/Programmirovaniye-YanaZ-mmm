#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

	int N = 0;
	cin >> N;
	int z = 0;
	int p = 0;
	int n = 0;

	for (int i = 1; i <= N; ++i)
	{
		int t;
		cin >> t;
		if (t == 0)
		{
			++z;
		}
		else if (t > 0)
		{
			++p;
		}
		else
		{
			++n;
		}
	}

	cout << z << " " << p << " " << n << endl;

	return EXIT_SUCCESS;
}