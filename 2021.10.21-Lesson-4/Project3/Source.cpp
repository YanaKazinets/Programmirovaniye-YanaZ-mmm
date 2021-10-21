#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	const int N = 10;
	int arr[N]{ 0 };

	for (int i = 0; i < N; ++i)
	{
		arr[i] = rand() % 1000;
	}
	for (int i = 0; i < N; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int t = arr[N - 1];
	for (int i = N - 1; i > 0; i -= 1)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = t;

	for (int i = 0; i < N; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}