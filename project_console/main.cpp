#include "head.h"

void main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	question quest_arr[10];
	string cmd;
	bool flag = false;
	int cmd1;
	input(quest_arr);
	random(quest_arr);
	printf("������������ �� ����������������\n\n1. ����� \"����������\"\n2. ����� \"�������\"\n\n�������:\n\n���� ������� �� 10 ��������, ��������������� � ��������� �������. ����� \"����������\" - ������������\n\
�������� �� ������ �� ��� ���, ���� �� ������� �����. ����� \"�������\" - � ������ ������������� ������,\n���� ������������, � ����� ������������ ������������ ������ ������ �� ���������� ���������� �������\n\n");
	do
	{
		printf("? : ");
		getline(cin, cmd);
		if (cmd.compare("1") == 0)
		{
			flag = true;
			continue;
		}
		else
		{
			if (cmd.compare("2") == 0)
			{
				flag = true;
				continue;
			}
			else
			{
				printf("������ �������� ������ ��� :(\n");
			}
		}
	} while (flag == false);
	printf("\n");
	cmd1 = stoi(cmd);
	switch(cmd1)
	{
	case 1: training(quest_arr); break;
	case 2: examination(quest_arr); break;
	}
	system("pause");
}