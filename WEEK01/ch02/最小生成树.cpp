#include<iostream>
#define MAXSIZE 7//顶点数
#define NUMEDGE 10//边数
#define INFINITY 65535//不可能达到的值
using namespace std;
void Graph(int G[MAXSIZE][MAXSIZE])//建立邻接矩阵
{
	for (int i = 0; i < MAXSIZE; i++)//将对角线赋值为0，其他赋值为INFINITY
	{
		for (int j = 0; j < MAXSIZE; j++)
			G[i][j] = INFINITY;
		G[i][i] = 0;
	}
	cout << "请输入无向图的边的顶点 x ， y 和权值 w \n";
	int x, y, w;
	for (int i = 1; i <= NUMEDGE; i++)//输入边,利用无向图的对称性
	{
		cin >> x >> y >> w;
		G[x][y] = w;
		G[y][x] = G[x][y];
	}
	
}
void MinPrim(int G[MAXSIZE][MAXSIZE])//Prim算法
{
	int min, i, j, k;
	int adjvex[MAXSIZE];
	int lowcost[MAXSIZE];
	memset(adjvex, 0, sizeof(adjvex));
	memset(lowcost, 0,sizeof(lowcost));
	for (i = 1; i < MAXSIZE; i++)//将邻接矩阵第一列放在数组lowcost中
	{
		lowcost[i] = G[0][i];
	}
	for (i = 1; i < MAXSIZE; i++)
	{
		min = INFINITY;
		j = 1; k = 0;
		while (j < MAXSIZE)//找到数组lowcost中除零以外的最小值，并将下标赋给k
		{
			if (lowcost[j] != 0 && lowcost[j] < min)
			{
				min = lowcost[j];
				k = j;
			}
			j++;
		}
		cout << "当前顶点边权值最小的边：" << adjvex[k] << " , " << k<<endl;
		lowcost[k] = 0;//将找到的最小值的位置置为0
		for (j = 1; j < MAXSIZE; j++)//将数组lowcost中第j个元素与邻接表中的第k列中第j个元素比较
		{
			if (lowcost[j] != 0 && G[k][j] < lowcost[j])
			{
				lowcost[j] = G[k][j];
				adjvex[j] = k;
			}
		}
	}
}
int main()
{
	int G[MAXSIZE][MAXSIZE];
	memset(G, 0, sizeof(G));
	Graph(G);
	for (int i = 0; i < MAXSIZE; i++)
	{
		for (int j = 0; j < MAXSIZE; j++)
			cout << G[i][j]<<"\t";
		cout << endl;
	}
	MinPrim(G);
	return 0;
}
