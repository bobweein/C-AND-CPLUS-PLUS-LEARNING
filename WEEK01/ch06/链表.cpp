#include <iostream>
#include<string>
using namespace  std;
struct Pizer
{
	string brand;
	double zhijin;
	double weight;
	Pizer* next;
};

Pizer* CreatList(void)
{
	Pizer *p=NULL, *q=NULL,*head=NULL;
	q=new Pizer;
	p = q;
	int n = 0;
	getline(cin, q->brand);
	//cin.getline(q->brand,20);
	cin >>q->zhijin>>q->weight;
	while (q->zhijin)
	{
		cin.get();//至关重要
		n++;
		if (n == 1)
			head = q;
		else
		{
			p->next = q;
			p = q;
		}
		q = new Pizer;
		//cin.getline(q->brand,20);
		getline(cin, q->brand);
		cin >> q->zhijin;
		cin >> q->weight;
	}
	p->next = NULL;
	return head;
}
int main()
{
	Pizer* P=NULL,*p=NULL;
	cout << "输入格式为：\n" << "Brand:\n" << "直径(cm)：\t\t," << "重量(g)：\n";
	P = CreatList();
	p = P;
	cout << endl;
	while (p)
	{
		cout << "Brand:" << p->brand << "\n" << "直径:" << p->zhijin
			<< " ,重量： " << p->weight << "\n\n";
		p = p->next;
	}
	return 0;
}
