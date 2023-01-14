// Source.cpp
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <time.h>
using namespace std;

int main()
{ 
    int n;
	int nYOB(0);
	int nCurYear(2022);

	cout << "Nhap nam sinh cua ban: ";
	cin >> nYOB;

#if 0

	// Khai báo biến Time để lấy giá trị thời gian thực từ máy tính
	time_t Time = time(0);

	// Khởi tạo con trỏ Now lấy giá trị thời gian từ Time
	tm* Now = localtime(&Time);

	// Lấy năm hiện tại từ hệ thống máy tính gán cho biến nCurYear
	nCurYear = Now->tm_year + 1900;

#endif

	cout << "-------------------" << endl;
	cout << "Ban sinh nam " << nYOB << endl;
	cout << "Ban " << nCurYear - nYOB << " tuoi." << endl;

	return 0;
}