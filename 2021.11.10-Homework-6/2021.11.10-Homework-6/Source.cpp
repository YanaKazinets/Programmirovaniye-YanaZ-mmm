#include<iostream>
#include<clocale>

using namespace std;

int main(int argc, char*argv[])
{
	setlocale(LC_ALL, "rus");

	int n = 0;
	int* arr = new int[1]{ 0 };
	
	bool exit = false;
	while (!exit)
	{

		system("cls");
		cout << "�������� ��������: " << endl;
		cout << "0. ����� �� ���������." << endl;
		cout << "1. ����� �������� ��������� �������." << endl;
		cout << "2. �������� ������� � ����� �������." << endl;
		cout << "3. �������� ������� � ������ �������." << endl;
		cout << "4. ������� ������� �� ����� �������." << endl;
		cout << "5. ������� ������� �� ������ �������." << endl;
		cout << "6. ���������� ������." << endl;

		char c = 0;
		cout << "��� �����: ";
		cin >> c;

		switch (c)
		{
		case 48:
			exit = true;
			break;
		case 49:
		{
			for (int i = 0; i < n; ++i)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
			system("pause");

			break;
		}
		case 50:
		{
			int a = 0;
			cout << "������� �������: ";
			cin >> a;

			int* adarr = new int[n + 1]{ 0 };
			for (int i = 0; i < n; ++i)
			{
				adarr[i] = arr[i];
			}
			adarr[n] = a;
			delete[] arr;
			arr = adarr;
			n += 1;

			break;
		}
		case 51:
		{
			int a = 0;
			cout << "������� �������: ";
			cin >> a;

			int* adarr = new int[n + 1]{ 0 };
			for (int i = 0; i < n; ++i)
			{
				adarr[i + 1] = arr[i];
			}
			adarr[0] = a;
			delete[] arr;
			arr = adarr;
			n += 1;

			break;
		}
		case 52:
		{
			if (n != 0)
			{
				n -= 1;
				if (n != 0)
				{
					int* adarr = new int[n] { 0 };
					for (int i = 0; i < n; ++i)
					{
						adarr[i] = arr[i];
					}
					delete[] arr;
					arr = adarr;
				}
				else
				{
					arr = new int[1]{ 0 };
				}
			}
			break;
		}
		case 53:
		{
			if (n != 0)
			{
				n -= 1;
				if (n != 0)
				{
					int* adarr = new int[n] { 0 };
					for (int i = 0; i < n; ++i)
					{
						adarr[i] = arr[i + 1];
					}
					delete[] arr;
					arr = adarr;
				}
				else
				{
					arr = new int[1]{ 0 };
				}
			}
			break;
		}
		case 54:
		{
			for (int i = 0; i < n / 2; ++i)
			{
				int t = 0;
				t = arr[n - i - 1];
				arr[n - i - 1] = arr[i];
				arr[i] = t;
			}
			cout << endl;

			break;
		}
		}
	}

	delete[] arr;

	return EXIT_SUCCESS;
}