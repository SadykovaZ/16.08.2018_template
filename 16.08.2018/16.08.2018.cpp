// 16.08.2018.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include<cmath>

using namespace std;

//int areaR(int x, double b=0.5)
//{
//	return x * 2;
//}
//int areaR(int h, int w=1) //назначения значений по умолчанию с права начинается
//{
//	return h * w;
//}

//int arrMax(int arr[], int size)
//{
//	int max = INT_MIN;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//
//double arrMax(double arr[], int size)
//{
//	double max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//template<typename type> //we can put class instead of typename 
//
//type arrMax(type arr[], int size, int &pos)
//{
//	type max = arr[0];
//	int max_pos;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			max_pos = i;
//		}
//	}
//	pos = max_pos;
//	return max;	
//}

//template<typename type>
//
//void arrZero(type arr[], int size, int &pos)
//{
//	int zero_pos;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == 0)
//		{
//			zero_pos = i;
//			cout << zero_pos << endl;;
//		}
//	}	
//}
//
//template<typename type1>
//
//type1 XY(type1 x, int y)
//{
//	return pow(x, y);
//}

int calendare(int day, int month, int year)
{
	int begin_shift = 6;
	bool leap_year = true;
	int bday = 1;
	int bmonth = 1;
	int byear = 2000;
	int days=day;

	int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
	{
		months[1] = 29;
		leap_year = true;
	}
	int t = 0;
	for (int i = 2017; i >= year; i--)
	{
		t += (leap_year(i)) + 1, t %= 7;
	}
	days += 7 - t;
	else
	{
		leap_year = false;
		months[1] = 28;
	}


	for (int i = 0; i < month-1; i++)
	{
		days += months[i];
	}

	//cout << days << endl;

	int week_day = days % 7;
	
	switch (week_day)
	{
	case 1: cout << "Monday" << endl;
		break;
	case 2: cout << "Tuesday" << endl;
		break;
	case 3: cout << "Wendsday" << endl;
		break;
	case 4: cout << "Thursday" << endl;
		break;
	case 5: cout << "Friday" << endl;
		break;
	case 6: cout << "Saturday" << endl;
		break;
	case 7: cout << "Sunday" << endl;
		break;
	}

	return week_day;
	
}

//int twoSystem(int n, int &res)
//{
//
//
//}

int main(void)
{
	int d, m, y;

	cin >> d >> m >> y;
	cout << calendare(d, m, y);
#pragma region xd



	/*double c, b;
	cin >> c >> b;

	cout << XY(c, b) << endl;


	int a[] = { 1,2,3,0,5,0,0 };
	int position;

	arrZero(a, 7, position);*/


	/*int a[] = { 2,5,1,8,3 };
	double b[] = { 1.2,2.6,2.8,1.3,3.6 };
	int position;

	cout << arrMax(a, 5, position) << endl;
	cout << " " << position << endl;
	cout << arrMax(b, 5,position) << endl;
	cout << " " << position << endl;*/
	//cout << x << endl;

	/*int x, y;
	cin >> x >> y;
	cout << areaR(x) << endl;
	*/
#pragma endregion
	system("pause");
	return 0;
}

