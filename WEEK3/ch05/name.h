#ifndef _NAME_H_
#define  _NAME_H
#include <iostream>
class Person
{
private :
	static const int LIMIT = 25;
	std::string lname;
	char fname[LIMIT];
public:
	Person() { lname = ""; fname[0] = '\0'; }
	Person(const std::string& ln, const char* fn = "Zanhua");
	void Show()const;
	void FormalShow()const;

};
#endif 
