#include <iostream>

using namespace std;

int main(int argc, char* argv[]) 
{

	int n = 0;
	cin >> n;
	int s = 1;

	for (int i = 1; i <= n; ++i)
	{
		s *= 2;
	}

	cout << s << endl;

	return EXIT_SUCCESS;
}