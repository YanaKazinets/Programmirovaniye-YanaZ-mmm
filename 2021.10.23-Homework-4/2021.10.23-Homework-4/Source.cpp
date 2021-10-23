#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int arr[100]{ 0 };
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << "ARRAY: ";
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "EVEN: ";
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] % 2 == 0)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;

	
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
	}
	cout << "SUM: " << sum << endl;

	int neg = 1;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] < 0)
		{
			neg *= arr[i];
		}
	}
	cout << "PRODUCT OF NEGATIVE: " << neg << endl;

	int MinIndex = 0;
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < arr[MinIndex])
		{
			MinIndex = i;
		}
	}
	cout << "FIRST MIN INDEX: " << MinIndex << endl;

	int SecMaxInd = -1;
	int MaxIndex = 0;
	for (int i = 1; i < n; ++i)
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
	cout << "SECOND MAX: "<< arr[SecMaxInd] << endl;

	
	cout << "REVERCE: ";
	for (int i = n - 1; i >=0; --i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "ODD INDEXES: ";
	for (int i = 1; i < n; i += 2)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}