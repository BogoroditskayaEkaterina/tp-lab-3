#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

DateTime::DateTime(int day, int month, int year)
{
	time_t tmp = time(NULL);
	Time = new tm;
	memcpy(Time, localtime(&tmp), sizeof(tm));
	Time->tm_mday = day;
	Time->tm_mon = month - 1;
	Time->tm_year = year - 1900;
	mktime(Time);
}

DateTime::DateTime()
{
	time_t now = time(NULL);
	Time = localtime(&now);
}

DateTime::DateTime(const DateTime& date)
{
	this->Time = date.Time;
}

string DateTime::getToday()
{
	string day[] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
	string month[] = { "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };
	string result;
	string tmp;
	if (Time->tm_mday < 10)
	{
		tmp = to_string(0);
	}
	result = tmp + to_string(Time->tm_mday) + " " + month[Time->tm_mon] + " " + to_string(Time->tm_year + 1900) + "," + " " + day[Time->tm_wday];
	return result;
}

string DateTime::getPast(unsigned int n)
{
	DateTime past;
	memcpy(past.Time, Time, sizeof(tm));
	past.Time->tm_mday = past.Time->tm_mday - n;
	mktime(past.Time);
	return past.getToday();
}

string DateTime::getFuture(unsigned int n)
{
	DateTime future;
	memcpy(future.Time, Time, sizeof(tm));
	future.Time->tm_mday = future.Time->tm_mday + n;
	mktime(future.Time);
	return future.getToday();
}

string DateTime::getYesterday()
{
	return getPast(1);
}

string DateTime::getTomorrow()
{
	return getFuture(1);
}


int DateTime::getDifference(DateTime& newdate)
{
	return abs(mktime(Time) - mktime(newdate.Time)) / 86400;
}
