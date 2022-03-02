#include "head.h"

void input(struct question* quest_arr)
{
	setlocale(LC_ALL, "RU");
	FILE* f;
	if ((f = fopen("questions.txt", "r")) == NULL) {
		printf("Cannot open file.\n");
		exit(1);
	}

	for (int count_q = 0; count_q < 10; count_q++)
	{
		fgets(quest_arr[count_q].quest, 350, f);
		for (int i = 0; i < strlen(quest_arr[count_q].quest); i++)
		{
			if (quest_arr[count_q].quest[i] == ' ' || quest_arr[count_q].quest[i] == ')' || quest_arr[count_q].quest[i] == '(')
			{
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'А')
			{
				quest_arr[count_q].quest[i] = 'Э';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'Б')
			{
				quest_arr[count_q].quest[i] = 'Ю';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'В')
			{
				quest_arr[count_q].quest[i] = 'Я';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'Ё')
			{
				quest_arr[count_q].quest[i] = 'Г';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'и')
			{
				quest_arr[count_q].quest[i] = 'ё';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'з')
			{
				quest_arr[count_q].quest[i] = 'е';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'ж')
			{
				quest_arr[count_q].quest[i] = 'д';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'ё')
			{
				quest_arr[count_q].quest[i] = 'г';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'р')
			{
				quest_arr[count_q].quest[i] = 'н';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'с')
			{
				quest_arr[count_q].quest[i] = 'о';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'т')
			{
				quest_arr[count_q].quest[i] = 'п';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'a')
			{
				quest_arr[count_q].quest[i] = 'э';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'б')
			{
				quest_arr[count_q].quest[i] = 'ю';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'в')
			{
				quest_arr[count_q].quest[i] = 'я';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'a')
			{
				quest_arr[count_q].quest[i] = 'x';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'b')
			{
				quest_arr[count_q].quest[i] = 'y';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'c')
			{
				quest_arr[count_q].quest[i] = 'z';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'A')
			{
				quest_arr[count_q].quest[i] = 'X';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'B')
			{
				quest_arr[count_q].quest[i] = 'Y';
				continue;
			}
			if (quest_arr[count_q].quest[i] == 'C')
			{
				quest_arr[count_q].quest[i] = 'Z';
				continue;
			}
			else
				quest_arr[count_q].quest[i] = quest_arr[count_q].quest[i] - 3;
		}
		fgets(quest_arr[count_q].answer, 5, f);
		for (int i = 0; i < strlen(quest_arr[count_q].answer); i++)
		{

			if (quest_arr[count_q].answer[i] == 'ё')
			{
				quest_arr[count_q].answer[i] = 'г';
				continue;
			}
			else
				quest_arr[count_q].answer[i] = quest_arr[count_q].answer[i] - 3;
		}
		fgets(quest_arr[count_q].a, 60, f);
		fgets(quest_arr[count_q].b, 60, f);
		fgets(quest_arr[count_q].c, 60, f);
		fgets(quest_arr[count_q].d, 60, f);
	}	
	fclose(f);
}

void training(struct question* quest_arr)
{
	setlocale(LC_ALL, "RU");
	string answer;
	int len, queue = 1;
	bool flag = false;
	for (int i = 0; i < 10; i++)
	{
		flag = false;
		printf("%d. %s\n\n", queue, quest_arr[i].quest);
		printf("%s", quest_arr[i].a);
		printf("%s", quest_arr[i].b);
		printf("%s", quest_arr[i].c);
		printf("%s\n\n", quest_arr[i].d);
		printf("Ответ: ");
		do
		{
			getline(cin, answer);
			len = strlen(quest_arr[i].answer) - 1;				
			if (answer.length() != len)
			{
				printf("Вы ответили неверно\n");
				printf("Ответ: ");
			}
			else
			{
				if (string(quest_arr[i].answer).compare(0, len, answer) == 0)
				{
					printf("\nВы ответили верно\n");
					flag = true;
				}
				else
				{
					printf("Вы ответили неверно\n");
					printf("Ответ: ");
				}
			}
		} while (flag == false);
		queue++;
		printf("\n");
	}
	printf("\nКонец :^)\n");
}

void random(struct question* quest_arr)
{
	srand(time(NULL));
	int j;
	char tmp_quest[350];
	char tmp_answer[5];
	char tmp_a[60];
	char tmp_b[60];
	char tmp_c[60];
	char tmp_d[60];
	for (int i = 9; i > 0 ; i--)
	{
		strcpy(tmp_quest, quest_arr[i].quest);
		strcpy(tmp_answer, quest_arr[i].answer);
		strcpy(tmp_a, quest_arr[i].a);
		strcpy(tmp_b, quest_arr[i].b);
		strcpy(tmp_c, quest_arr[i].c);
		strcpy(tmp_d, quest_arr[i].d);
		j = rand() % i;
		strcpy(quest_arr[i].quest, quest_arr[j].quest);
		strcpy(quest_arr[j].quest, tmp_quest);
		strcpy(quest_arr[i].answer, quest_arr[j].answer);
		strcpy(quest_arr[j].answer, tmp_answer);
		strcpy(quest_arr[i].a, quest_arr[j].a);
		strcpy(quest_arr[j].a, tmp_a);
		strcpy(quest_arr[i].b, quest_arr[j].b);
		strcpy(quest_arr[j].b, tmp_b);
		strcpy(quest_arr[i].c, quest_arr[j].c);
		strcpy(quest_arr[j].c, tmp_c);
		strcpy(quest_arr[i].d, quest_arr[j].d);
		strcpy(quest_arr[j].d, tmp_d);
	}
}

void examination(struct question* quest_arr)
{
	setlocale(LC_ALL, "RU");
	string answer;
	int len, right_answers = 0, wrong_answers = 0, memory = 0, queue = 1;
	int *array = NULL;
	for (int i = 0; i < 10; i++)
	{
		printf("%d. %s\n\n", queue, quest_arr[i].quest);
		printf("%s", quest_arr[i].a);
		printf("%s", quest_arr[i].b);
		printf("%s", quest_arr[i].c);
		printf("%s\n\n", quest_arr[i].d);
		printf("Ответ: ");
		getline(cin, answer);
		len = strlen(quest_arr[i].answer) - 1;
		if (answer.length() != len)
		{
			printf("\n");
			array = (int*)realloc(array, (memory + 1) * sizeof(int));
			array[wrong_answers] = i + 1;
			memory++;
			wrong_answers++;
		}
		else
		{
			if (string(quest_arr[i].answer).compare(0, len, answer) == 0)
			{
				printf("\n");
				right_answers++;
			}
			else
			{
				printf("\n");
				array = (int*)realloc(array, (memory + 1) * sizeof(int));
				array[wrong_answers] = i + 1;
				memory++;
				wrong_answers++;
			}
		}
		queue++;
	}
	printf("\n");
	if (right_answers < 5)
	{
		printf("Оценка: 2\n");
		printf("Ошибки в вопросах: ");
		for (int i = 0; i < wrong_answers; i++)
		{
			printf("%d ", *(array + i));
		}
	}
	else
	{
		printf("Оценка: %d\n", right_answers / 2);
		if (wrong_answers != 0)
		{
			printf("Ошибки в вопросах: ");
			for (int i = 0; i < wrong_answers; i++)
			{
				printf("%d ", *(array + i));
			}
		}
	}
	printf("\n");
	free(array);
	printf("\nКонец :^)\n");
}