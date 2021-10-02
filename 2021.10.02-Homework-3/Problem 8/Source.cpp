#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

	int N = 0;
	cin >> N;
	int sum = 0;

	for (int i = 1; i <= N; ++i)
	{
		int t;
		cin >> t;
		sum += t;
	}

	cout << sum << endl;

	return EXIT_SUCCESS;
}