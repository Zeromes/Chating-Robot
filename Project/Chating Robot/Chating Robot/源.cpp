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
		cout << "�Ѿ��洢�ĵ��ʣ�" << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << iwords[j] << endl;
		}
		iccwj.close();
	}
	else
	{
		occwj.open("ccwj.txt");
		cout << "�������ݣ�������Ҫ����ĵ��ʣ�5����һ���������20���ַ�����" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "��" << i + 1 << "����";
			cin >> owords[i];
		}
		for (int i = 0; i < 5; i++)
		{
			occwj << owords[i] << endl;
		}
		occwj.close();
		cout << "������ϣ�" << endl;
	}
	while (1)
	{
		cout << "ѡ��Ҫ���еĲ�����" << endl;
		cout << "1.���µ���   2.��ȡ����   3.�˳�" << endl;
		int c;
		cin >> c;
		switch (c)
		{
		case 1:
			occwj.open("ccwj.txt");
			cout << "������Ҫ����ĵ��ʣ�5����һ���������20���ַ�����" << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << "��" << i + 1 << "����";
				cin >> owords[i];
			}
			for (int i = 0; i < 5; i++)
			{
				occwj << owords[i] << endl;
			}
			occwj.close();
			cout << "������ϣ�" << endl;
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
				cout << "�Ѿ��洢�ĵ��ʣ�" << endl;
				for (int j = 0; j < 5; j++)
				{
					cout << iwords[j] << endl;
				}
				iccwj.close();
			}
			else
			{
				cout << "��������ȱ�ٱ�Ҫ�ļ���" << endl;
				system("pause");
				exit(1);
			}
			break;
		case 3:
			exit(0);
		default:
			cout << "�������" << endl;
		}
	}
	return 0;
}