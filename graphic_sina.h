/**************************************************
**                                               **
**      SINA_YADEMELLAT,  9813027346		     **
**                                               **
***************************************************/

#pragma once

#include <iostream>
#include <iomanip>

using namespace std;


void ERROR_tabel(const string& cause)
{
	cout << "\n";
	cout << char(218) << setfill(char(196)) << setw(12) << char(191);
	cout << "\n" << char(179) << "   ERROR   " << char(179); cout << "\t" << "<< " << cause << " >>";
	cout << "\n" << char(192) << setfill(char(196)) << setw(12) << char(217);
	cout << "\n";
}

void box_dynamic(const string& item)
{
	int size_of = item.length();
	size_of += 3;

	cout << '\n';
	cout << char(218) << setfill(char(196)) << setw(size_of) << char(191);
	cout << "\n" << char(179) << " " << item << " " << char(179);
	cout << '\n';
	cout << char(192) << setfill(char(196)) << setw(size_of) << char(217);
	cout << '\n';
}

void box_dynamic_center_(const string& item,int number)
{
	int size_of = item.length();
	size_of += 3;

	cout << '\n';
	cout <<'\t' << char(218) << setfill(char(196)) << setw(size_of) << char(191);
	cout << '\n' <<"  "<<number <<" >> " <<'\t'<< char(179) << " " << item << " " << char(179);
	cout << '\t' << '\n';
	cout << '\t' << char(192) << setfill(char(196)) << setw(size_of) << char(217);
	//cout << '\n';
}
