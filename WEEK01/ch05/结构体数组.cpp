#include<iostream>
#include <string>
using namespace std;
struct CandyBar
{
	string brand;
	double weight;
	double caroly;
};
int main()
{
	cout << "请输入结构体数组的长度：";
	int n;
	cin >> n;
	CandyBar *p = new CandyBar[n];
	cout << "输入格式：\n" << "蛋糕的品牌：\n" << "蛋糕的质量（g):\t" << "蛋糕的卡路里：\n";
	for (int i = 0; i < n; i++)
	{
		cin.get();
		getline(cin, (p+i)->brand);
		cin >> (p+i)->weight;
		cin >> (p+i)->caroly;
		
	}
	for (int i = 0; i < n; i++)
	{
		cout << "蛋糕的品牌：" << (*(p+i)).brand << endl;
		cout << "质量(g)：" << (*(p+i)).weight << "\t" << "卡路里：" << (*(p+i)).caroly << endl;
	}
	delete[] p;
	return 0;

}
