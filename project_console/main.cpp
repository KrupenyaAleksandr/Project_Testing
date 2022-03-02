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
	printf("Тестирование по программированию\n\n1. Режим \"Тренировка\"\n2. Режим \"Экзамен\"\n\nСправка:\n\nТест состоит из 10 вопросов, располагающихся в случайном порядке. Режим \"Тренировка\" - пользователь\n\
отвечает на вопрос до тех пор, пока не ответит верно. Режим \"Экзамен\" - в случае неправильного ответа,\nтест продолжается, в конце пользователю выставляется оценка исходя из количества правильных ответов\n\n");
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
				printf("Такого варианта ответа нет :(\n");
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