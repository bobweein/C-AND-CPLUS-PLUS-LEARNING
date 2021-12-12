#include <iostream>
#include "name.h"
using namespace std;
int main()
{
	Person one;
	Person two("chen");
	Person three("ma", "zhongzhong");
	one.Show();
	cout << endl;
	one.FormalShow();
	cout << endl;
	two.Show();
	cout << endl;
	two.FormalShow();
	cout << endl;
	three.Show();
	cout << endl;
	three.FormalShow();
}
