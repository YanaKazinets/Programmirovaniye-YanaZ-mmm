#include <iostream>
#include <clocale>

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "������� ����� ��� ���������:" << endl;
	cin >> a >> b;
	cout << "Raznost ravna: " << a - b << endl;

	return EXIT_SUCCESS;
}