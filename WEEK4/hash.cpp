///ʱ�临�Ӷ�Ϊn
#include <iostream>
#include <cctype>
#define HASHSIZE 37//ɢ�б�����ĳ���
bool hashTable[HASHSIZE]{false};
int HashFun(char key);
void InitHash(const char key);
int HashFun(char key)//ɢ�к���
{
	int value=0;
	if (isdigit(key))
		value = (int)key - 48;//����0-9��ascll��ʮ�����Ǵ�48��ʼ�ģ���0-9����ɢ�б����±�Ϊ0-9��λ��
	else if (key == '_')
		value = (int)key - 22;//�ո��ascll��ʮ������32����������ɢ�б����±�Ϊ10��λ��
	else if (isalpha(key))
		value=11+ toupper(key)-'A';//����ĸ�������ִ�Сд������ɢ�б����±�Ϊ11��36��λ��
	return value;
}
void InitHash(const char key)
{
	
		hashTable[HashFun(key)] = true;
}
int main()
{
	using namespace std;
	char arr[100]="7_This_is_a_test";
	char arr1[100] = "_hs_s_a_es";
	char arr2[100];
	cout << "Ӧ��Ҫ�����һ������:"<<arr<<endl;
	cout << "ʵ�ʱ���������֣�" << arr1<<endl;
	int i = 0,j=0;
	while (arr1[i] != '\0')
	{
		InitHash(arr1[i]);
		i++;
	}
	i = 0;
	cout << "�й��ϵİ�����";
	while (arr[i] != '\0')
	{
		if (!hashTable[HashFun(arr[i])])//�����������ǹ��ϵ�
		{
			arr2[j] = arr[i];//�����ϵİ����ŵ�����arr2�У����ǻὫ�ظ���Ҳ�Ž�ȥ��
			if (!isalpha(arr2[j])) cout << (char)arr2[j];//���������ŵ�����arr2�еĹ��ϰ���
			else   cout << (char)toupper(arr2[j]);
			InitHash(arr2[j]);
			//����Ĺ��ϰ����󣬼�װ��������֡���á��ˣ������´�������������ϵİ�����ʱ��Ͳ����ظ�����ˡ�
			j++;
		}
		i++;
	}

	return 0;
}
