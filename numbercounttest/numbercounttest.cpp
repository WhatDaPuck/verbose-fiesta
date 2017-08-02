// numbercounttest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <time.h>
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
	clock_t start = clock(), diff;
	DWORD tSTART = __rdtsc();
	func();
	DWORD tSTOP = __rdtsc();
	diff = clock() - start;
	int msec = diff * 1000 / CLOCKS_PER_SEC;
	DWORD elapsed = tSTOP - tSTART;
	std::cout << "Your beginning tick was: " << (tSTART) << '\n' << "Your stopping tick was: " << (tSTOP) << '\n' << "The total difference was: " << (elapsed) << '\n';
	std::cout << "Seconds taken: " << (msec / 1000) << '\n' << "Milliseconds taken: " << (msec % 1000) << '\n';
	getchar();
    return 0;
}