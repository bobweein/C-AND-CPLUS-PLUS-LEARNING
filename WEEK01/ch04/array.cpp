#include<iostream>
#include<array>
int main()
{
	using namespace std;
	array<double, 3> arr;
	double sum = 0.0;
	for (int i = 0; i < 3; i++)
	{
		cout << "第 " << i << " 次";
		cin >> arr[i];
		sum += arr[i];
	}
	cout << "平均成绩为：" << sum / 3;
	return 0;
	
}
