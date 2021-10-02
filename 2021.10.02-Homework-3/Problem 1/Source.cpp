#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

	int n = 0;
	cin >> n;
	int f = 1;

	for (int i = 1; i <= n; ++i)
	{
		f *= i;
	}

	cout << f << endl;

	return EXIT_SUCCESS;
}