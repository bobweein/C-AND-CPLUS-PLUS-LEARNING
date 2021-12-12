#include <iostream>
#include <stdlib.h>
#include <string>
#include "golf.h"
#define N 3
using namespace std;
void Setgolf()
{
	int c = 0;
	string name;
	int hc = 0;
	Golf golf[N];
	while (c>-1&&c<N)
	{
		getline(cin, name);//getline (cin,name)这个函数再头文件#include<string>中
		(cin >> hc).get();
		golf[c]=Golf(name,hc);
		golf[c].Showgolf();
		cout << endl;
		if (name[0] == '\0') c = -1;
		else c++;
	}
	golf[0].Handicap(9999);
	golf[0].Showgolf();
}
Golf::Golf(const string name, int hc)
{
	fullname = name;
	handicap = hc;
}
void Golf::Handicap(int hc)
{
	handicap = hc;
}
void Golf::Showgolf() const
{
	cout << fullname << "\t" << handicap << endl;
}
