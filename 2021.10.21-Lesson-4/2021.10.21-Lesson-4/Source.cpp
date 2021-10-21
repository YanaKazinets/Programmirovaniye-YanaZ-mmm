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


	int SecMaxInd = -1;
	int MaxIndex = 0;

	for (int i = 1; i < N; ++i)
	{
		if (arr[i] > arr[MaxIndex])
		{
			SecMaxInd = MaxIndex;
			MaxIndex = i;
		}
		else
		{
			if (SecMaxInd == -1 || arr[SecMaxInd] < arr[i])
			{
				SecMaxInd = i;
			}
		}
	}

	cout << SecMaxInd << endl;

	/*
	int n = 0;
	cin >> n;
	int* arrDynamic = new int[n] { 0 };

	delete[] arrDynamic;
	*/
	return EXIT_SUCCESS;
}