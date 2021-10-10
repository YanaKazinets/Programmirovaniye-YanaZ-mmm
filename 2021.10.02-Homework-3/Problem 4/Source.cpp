#include <iostream>

using namespace std;

int main(int argc, char* argv[]) 
{

	int n = 0;
	int k = 0;
	cin >> n >> k;
	int C = 0;
	int A = 1;
	int P = 1;

	for (int i = n - k + 1; i <= n; ++i)
	{
		A *= i;
	}

	for (int i = 2; i <= k; ++i)
	{
		P *= i;
	}

	cout << A / P << endl;

	return EXIT_SUCCESS;
}