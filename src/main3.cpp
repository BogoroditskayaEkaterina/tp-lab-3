#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <iostream>
#include <ctime>
#include <cstring>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	DateTime date(18, 12, 2019);
	DateTime datenow{};
	cout << date.getToday() << endl;
	cout << date.getYesterday() << endl;
	cout << date.getTomorrow() << endl;
	cout << date.getFuture(5) << endl;
	cout << date.getPast(5) << endl;
	cout << "\n";
	cout << datenow.getToday() << endl;
	cout << datenow.getYesterday() << endl;
	cout << datenow.getTomorrow() << endl;
	cout << datenow.getFuture(5) << endl;
	cout << datenow.getPast(5) << endl;
}
