#include <iostream>
#include <stdio.h>
#include "name.h"

Person::Person(const std::string & ln, const char* fn)
{
	lname = ln;
	int n=strlen(fn);
	for (int i = 0; i < n; i++)
		fname[i] = fn[i];
	fname[n] = '\0';
}
void Person::Show()const
{
	std::cout << fname << "  " << lname << std::endl;
}
void Person::FormalShow()const
{
	std::cout << lname << "  " << fname << std::endl;
}
