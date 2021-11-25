#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;

	int* arr = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int* quant = new int[n] { 0 };
	quant[0] = arr[0] + arr[1] + arr[n - 1];
	quant[n -1] = arr[0] + arr[n - 2] + arr[n -1];
	for (int i = 1; i < n - 1; ++i)
	{
		quant[i] = arr[i - 1] + arr[i] + arr[i + 1];
	}

	int max = quant[0];
	for (int i = 1; i < n; ++i)
	{
		if (quant[i] > max)
		{
			max = quant[i];
		}
	}

	cout << max;

	return EXIT_SUCCESS;
}