#include <cstdio>
const int maxn = 100;
int hashTable[maxn] = { 0 };
int main()
{
	int n, m, x;
	printf("������hashTable��Ԫ�صĸ��� n Ҫ���ҵ�Ԫ�صĸ���m\n");
	scanf_s("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &x);
		hashTable[x]++;
	}
	for (int i = 0; i < m; i++)
	{
		printf("������Ҫ���ҵ�Ԫ�ص�ֵ:");
		scanf_s("%d", &x);
		printf("Ҫ���ҵ�Ԫ����hashTable �еĸ�����%d\n\n", hashTable[x]);
	}
	return 0;
}