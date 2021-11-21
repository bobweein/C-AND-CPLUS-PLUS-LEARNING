#include<iostream>
#define MAXSIZE 6//存放物品价值和重量的数组的长度，
int n;//物品个数
double c;//背包容量
double w[MAXSIZE];//物品的重量
double p[MAXSIZE];//物品的价值
double cp = 0;//当前价值总量cp
double bestp = 0;//要返回的总价值的最大值
double cw = 0;//当前背包使用量
double bestw = 0;
double bound(int k);//限界函数
void backtrack(int k);//回溯算法函数
int main(void)
{
    using namespace std;
    cout << "请输入物品个数n:" << endl;
    cin >> n;
    cout << "请输入背包总容量 c:" << endl;
    cin >> c;
    cout << "请按顺序输入物品的重量w 和物品的价值 p:" << endl;
    for (int i = 0; i < n; i++)//一个w,一个p依次输入
    {
        cin >> w[i] >> p[i];
    }
    backtrack(0);//调用函数
    cout << "价值的最大值为：" << bestp << endl;
    return 0;
}
double bound(int k)
{
    double up = cp;//当前背包中的总价值
    double left = c - cw;//当前背包的剩余容量
    while (k <n && w[k] <= left)//先把能放进背包的加上
    {
        left -= w[k];//背包的剩余空间
        up += p[k];//背包中物品的价值
        k++;
    }
    if (k<n)//如果w[k]不能装入的话(k<n),也加上，但是处理一下（装满背包）
    {
        up += p[k] / w[k] * left;
    }
    return up;
}
void backtrack(int k)
{
    if (k >=n)//如果背包没装满，但是还有没装入的，调整bestp
    {
        if (cp > bestp)
        {
            bestp = cp;
        }
    }
    else
    {
        if (cw + w[k] <= c)//搜索左子树
        {
            cw += w[k];//修改当前背包容量
            cp += p[k];//修改当前背包中总价值
            backtrack(k + 1);//递归入口，将能放下的物品先放进来
            cw -= w[k];//修改当前背包容量
            cp -= p[k];//修改当前背包总价值
        }
        if (bound(k + 1) > bestp)//搜索右子树
        {
            backtrack(k + 1);
        }
    }
}
//中间运用了递归，但背包解的总组合数为2n，随着物品数n增大,其解空间将以2n级增长，而且在回溯过程中递归越来越多.































