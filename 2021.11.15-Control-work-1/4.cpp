#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;

	int* path = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		cin >> path[i];
	}

	

	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		if (path[i] > max)
		{
			max = path[i];
		}
	}
	
	int min = max;
	for (int i = 0; i < n; ++i)
	{
		if (path[i] < min)
		{
			min = path[i];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (path[i] == max)
		{
			path[i] = min;
		}

	}

	for (int i = 0; i < n; ++i)
	{
		cout << path[i] << " ";
	}

	delete[] path;

	return EXIT_SUCCESS;
}