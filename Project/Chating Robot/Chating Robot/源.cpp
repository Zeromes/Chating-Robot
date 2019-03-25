#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream iccwj;
	ofstream occwj;
	char iwords[5][20];
	char owords[5][20];
	iccwj.open("ccwj.txt");
	if (iccwj.is_open())
	{
		int i = 0;
		while (!iccwj.eof())
		{
			iccwj >> iwords[i];
			i++;
		}
		cout << "已经存储的单词：" << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << iwords[j] << endl;
		}
		iccwj.close();
	}
	else
	{
		occwj.open("ccwj.txt");
		cout << "尚无数据！请输入要储存的单词（5个，一个单词最多20个字符）：" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "第" << i + 1 << "个：";
			cin >> owords[i];
		}
		for (int i = 0; i < 5; i++)
		{
			occwj << owords[i] << endl;
		}
		occwj.close();
		cout << "储存完毕！" << endl;
	}
	while (1)
	{
		cout << "选择要进行的操作：" << endl;
		cout << "1.更新单词   2.读取单词   3.退出" << endl;
		int c;
		cin >> c;
		switch (c)
		{
		case 1:
			occwj.open("ccwj.txt");
			cout << "请输入要储存的单词（5个，一个单词最多20个字符）：" << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << "第" << i + 1 << "个：";
				cin >> owords[i];
			}
			for (int i = 0; i < 5; i++)
			{
				occwj << owords[i] << endl;
			}
			occwj.close();
			cout << "储存完毕！" << endl;
			break;
		case 2:
			iccwj.open("ccwj.txt");
			if (iccwj.is_open())
			{
				int i = 0;
				while (!iccwj.eof())
				{
					iccwj >> iwords[i];
					i++;
				}
				cout << "已经存储的单词：" << endl;
				for (int j = 0; j < 5; j++)
				{
					cout << iwords[j] << endl;
				}
				iccwj.close();
			}
			else
			{
				cout << "致命错误！缺少必要文件！" << endl;
				system("pause");
				exit(1);
			}
			break;
		case 3:
			exit(0);
		default:
			cout << "输入错误！" << endl;
		}
	}
	return 0;
}