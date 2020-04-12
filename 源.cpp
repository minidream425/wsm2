#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int num = 0;//输入字数个数
	int maxnum = 0;
	int temp;
	cout << "输入子数个数：" << endl;
	cin >> num;
	if (num <= 0)
	{
		cout << "输入值非正！error！！！" << endl;
	}

	else
	{
		cout << "输入整数：" << endl;
		int *x;
		x = new int[num];
		for (int i = 0; i < num; i++)
		{
			cin >> x[i];
		}
		for (int i = 0; i < num; i++)
		{
			for (int k = 0; k < num; k++)
			{
				temp = x[i];
				if (temp > maxnum)
				{
					maxnum = temp;
				}
				for (int j = i + 1; j <= k; j++)
				{
					temp = temp + x[j];
					if (temp > maxnum)
					{
						maxnum = temp;
					}
				}
			}
		}
		cout << maxnum << endl;
		delete[] x;
	}
}

