#include <iostream>
#include <string.h>
#include "name.h"
void SALES::setSales(Sales& s, const double ar[], int n)
{
	int i=0;
	double minn=ar[0], maxx=ar[0], avrr=0;
	for (i = 0; i < n; i++)
	{
		s.sales[i] = ar[i];
		if (ar[i] > maxx) maxx = ar[i];
		if (ar[i] < minn) minn = ar[i];
		avrr += ar[i];
	}
	s.max = maxx;
	s.min = minn;
	s.average = avrr / n;
}
void SALES::setSales(Sales& s)
{
	int i;
	double aerr=0.0;
	for (i = 0; i < 4; i++)
	{
		s.sales[i] = i * i;
		aerr += s.sales[i];
	}
	s.max = pow(i - 1, 2);
	s.min = 0;
	s.average = aerr / i;

}
void SALES::showSales(const Sales& s)
{
	int i = 0;
	for (i = 0; i < SALES::QUARTES; i++)
		std::cout << s.sales[i] << "  ";
	std::cout << std::endl << "  s.max :" << s.max << "  s.min :" << s.min << "  s.average :" <<
		s.average << std::endl;
}
