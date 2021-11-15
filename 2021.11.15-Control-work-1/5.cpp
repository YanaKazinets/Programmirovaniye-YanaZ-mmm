#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	cin >> n >> m;

	int* arrn = new int[n] { 0 };
	int* arrm = new int[m] { 0 };
	int* res = new int[n] { 0 };
	int countik = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> arrn[i];
	}


	for (int i = 0; i < m; ++i)
	{
		cin >> arrm[i];
	}

	for (int i = 0; i < n; ++i)
	{
		bool newn = true;
		for (int nx = 0; nx < i; ++nx)
		{
			if (arrn[i] == arrn[nx])
			{
				newn = false;
			}
		}
		if (newn)
		{
			for (int j = 0; j < m; ++j)
			{
				bool newm = true;
					for (int mx = 0; mx < i; ++mx)
					{
						if (arrn[i] == arrn[mx])
						{
							newm = false;
						}
					}
				if (newm && arrn[i] == arrm[j])
				{
					res[countik] = arrn[i];
					++countik;
				}
			}
		}
	}

	for (int i = 0; i < countik; ++i)
	{
		for (int j = i + 1; j < countik; ++j)
		{
			if (res[i] > res[j])
			{
				int t = res[i];
				res[i] = res[j];
				res[j] = t;
			}
		}
	}

	for (int i = 0; i < countik; ++i)
	{
		cout << res[i] << " ";
	}

	delete[] arrn;
	delete[] arrm;
	delete[] res;

	return EXIT_SUCCESS;
}