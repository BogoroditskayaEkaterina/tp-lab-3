#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <iostream>

using namespace std;

int main()
{
	int day, month, year;
	cin >> day;
	cin >> month;
	cin >> year;

	DateTime date (day, month, year);
	cout << date.getToday() << "\n";
	cout << date.getYesterday() << "\n";
	cout << date.getTomorrow() << "\n";
	cout << date.getFuture(365) << "\n";
	cout << date.getPast(365) << "\n\n";

	DateTime datetoday{};
	cout << datetoday.getToday() << "\n";
	cout << datetoday.getYesterday() << "\n";
	cout << datetoday.getTomorrow() << "\n";
	cout << datetoday.getFuture(365) << "\n";
	cout << datetoday.getPast(365);

}