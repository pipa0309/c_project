#include "startGame.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumberInRange(int from, int to)
{
	int result = from + rand() % (to - from);
	return result;
}

int getNumberFromUser(int f, int t)
{
	int result = 0;
	printf("Enter nuber from %d to %d\n", f, t);
	scanf_s("%d", &result);
	if (result < f)
	{
		result = f;
	}
	else if (result > t)
	{
		result = t;
	}
	return result;
}

int compareAndPrint(int r, int u)
{
	int success = 0;
	if (r > u)
	{
		printf("r > u\n");
		success = 0;
	}
	else if (r < u)
	{
		printf("r < u\n");
		success = 0;
	}
	else
	{
		printf("r == u\n");
		success = 1;
	}
	return success;
}

void startGame(int f, int t)
{
	long long currentTime = time(0);
	// инициализирует зерно для генерации случайных чисел
	srand(currentTime);

	// загадать число от 0 до 100
	int numRand = getRandomNumberInRange(f, t);
	int success = 0;
	while (success == 0)
	{
		// спросить у польз-ля число
		int numUser = getNumberFromUser(f, t);

		// сравнить и вывести > < =	
		success = compareAndPrint(numRand, numUser);
		if (success == 0)
		{
			printf("try again\n");
		}
		else if (success != 0)
		{
			printf("you won\n");
		}
	}
}