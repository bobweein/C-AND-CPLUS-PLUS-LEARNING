#include <iostream>
#include "name.h"
using namespace std;
int main()
{
	SALES::Sales A, B;
	double ar[SALES::QUARTES] = { 888,222.2,3339.8,9.996 };
	int n = sizeof(ar) / sizeof(ar[0]);
	SALES::setSales(A, ar, n);
	SALES::setSales(B);
	SALES::showSales(B);
	SALES::showSales(A);

	return 0;
}
