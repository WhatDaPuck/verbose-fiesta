// numbercounttest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <Windows.h>

int func()
{
	int base, exponent, stop;
	stop = 1000000;
	long long result = 0;
	base = 1;
	exponent = stop;
	while (result < stop)
	{
		result += base;
		//printf("%d\n", result);  //uncomment if you want
	}
	return 0;
}

int main()
{
	DWORD tSTART = __rdtsc();
	func();
	DWORD tSTOP = __rdtsc();
	DWORD elapsed = tSTOP - tSTART;
	std::cout << "Your beginning tick was: " << (tSTART) << '\n' << "Your stopping tick was: " << (tSTOP) << '\n' << "The total difference was: " << (elapsed);
	getchar();
    return 0;
}