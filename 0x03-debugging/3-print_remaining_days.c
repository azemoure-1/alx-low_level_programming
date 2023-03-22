#include "main.h"
#include <stdio.h>

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int days = 0;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				days = 1;
			}
		}
		else
		{
			days = 1;
		}
	}

	if (month >= 2 && day >= 60 && days == 1)
	{
		day++;
	}

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", (days == 1) ? (366 - day) : (365 - day));
}

