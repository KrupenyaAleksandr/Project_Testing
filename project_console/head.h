#pragma once
#ifndef HEAD_H
#define HEAD_H

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>
#include <string>

using namespace std;

void input(struct question* quest_arr);
void training(struct question* quest_arr);
void random(struct question* quest_arr);
void examination(struct question* quest_arr);

struct question {
	char quest[350];
	char answer[5];
	char a[60];
	char b[60];
	char c[60];
	char d[60];
};

#endif