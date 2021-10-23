#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	const int N = 11;
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

	for (int i = 0; i < N / 2; ++i)
	{
		int t = arr[i];
		arr[i] = arr[N - i - 1];
		arr[N - i - 1] = t;
	}
	for (int i = 0; i < N; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}