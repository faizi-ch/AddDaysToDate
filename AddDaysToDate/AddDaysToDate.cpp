#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <ctime>
#include <conio.h>
#include <iomanip>
#include <sstream>

using namespace std;

void main()
{

	time_t now = time(NULL);
	struct tm* tm = localtime(&now);
	tm->tm_mday += 14;
	cout << asctime(tm);

	/*time_t now = time(NULL);
	struct tm tmm; 
	localtime_s(&tmm,&now);
	tmm.tm_mday += 14;
	//cout << &tmm;
	//std::ostringstream oss;
	//oss<< put_time(const_cast<tm*>(&tmm), &tmm.tm_mday);
	//cout << oss.str();
	
	/ *const int TimeStrLen = 26;
	char timeStr[TimeStrLen];
	asctime_s(timeStr, TimeStrLen, &tmm);
	cout << timeStr;* /
	

	time_t curTime;
	struct tm locTime;
	
	const int TimeStrLen = 26;
	char timeStr[TimeStrLen];

	if ((-1 != time(&curTime))                          // Seconds since 01-01-1970
		&& (0 == localtime_s(&locTime, &curTime))          // Convert to local time
		&& (0 == asctime_s(timeStr, TimeStrLen, &locTime)) // Convert to string
		)
	{
		
		cout << "Date-time is: " << timeStr;
	}
	else
	{
		cerr << "Error calculating date-time!" << endl;
		exit(1);
	}

	//&tmm->tm_mday += 14;
	//cout << asctime_s(&tmm, &now);
	//cout << asctime_s(str, sizeof str, &tmm);

	

	/ *char date[9];
	_strdate(date);
	cout << date << endl;* /*/

	_getch();
}