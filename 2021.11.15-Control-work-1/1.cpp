#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	cin >> k;

	int** data = new int*[k] { 0 };
	
	for (int i = 0; i < k; ++i)
	{
		data[i] = new int[2]{ 0 };
	}

	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j < 2; ++j)

		{
			cin >> data[i][j];
		}
	}

	for (int i = 0; i < k; ++i)
	{
		int d = 19 * data[i][1] + (239 + data[i][0])*(366 + data[i][0]) / 2;
			cout << d << endl;
	}

	for (int i = 0; i < k; ++i)
	{
		delete[] data[i];
	}

	delete[] data;

	return EXIT_SUCCESS;
}