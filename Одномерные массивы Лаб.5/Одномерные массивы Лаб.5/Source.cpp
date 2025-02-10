#include <iostream>
#include <clocale>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Ru");
	const int max_s = 100;
	int arr[max_s];
	int arrs;
	int finals;

	cout << "������� ������ ������� (�� ����� " << max_s << "): ";
	cin >> arrs;

	if (arrs <= 0 || arrs > max_s)
	{
		cout << "������������ ������ �������";
		return 0;
	}

	for (int i = 0; i < arrs; ++i)
	{
		arr[i] = rand() % 100 - 50;
	}

	cout << "�������� ������: " << endl;
	for (int i = 0; i < arrs; ++i)
		cout << arr[i] << ' ';
	cout << endl;
	cout << endl;
	
	int min = arr[0];
	for (int i = 0; i < arrs; ++i)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	
	int newarr[max_s];
	int news = 0;
	for (int i = 0; i < arrs; ++i)
	{
		if (arr[i] != min)
		{
			newarr[news] = arr[i];
			news++;
		}
	}

	cout << "������ ����� �������� ����������� ���������" << endl;
	for (int i = 0; i < news; ++i)
		cout << newarr[i] << ' ';
	cout << endl;

	int sum = 0;
	for (int i = 0; i < news; ++i)
		sum += newarr[i];
	double SrAr = sum / news;
	
	int finalarr[max_s];
	for (int i = 0; i < news; ++i)
	{
		finalarr[i + 3] = newarr[i];
	}
	
	for (int i = 0; i < 3; ++i)
	{
		finalarr[i] = SrAr;
	}

	cout << endl;
	cout << "������ ����� ����������� � ������ ���� ��������� ������ �������� ���������������: " << endl;
	finals = news + 3;
	for (int i = 0; i < finals; ++i)
		cout << finalarr[i] << ' ';
	cout << endl;
	return 0;
}