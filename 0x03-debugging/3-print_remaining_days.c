#include <stdio.h>
#include "main.h"

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
if (month < 1 || month > 12 || day < 1 || day > 31)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
int days_of_month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 31, 30, 31, 30, 31};

if (month == 2 && day > 29)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}
int day_of_year = 0;
for (int i = 1; i < month; i++)
{
day_of_year += days_of_month[i];
}
day_of_year += day;

printf("Day of the year: %d\n", day_of_year);
printf("Remaining days: %d\n", 366 - day_of_year);
}
else
{
int days_of_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 31, 30, 31, 30, 31};
if (month == 2 && day > 28)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}
int day_of_year = 0;
for (int i = 1; i < month; i++)
{
day_of_year += days_in_month[i];
}
day_of_year += day;
printf("Day of the year: %d\n", day_of_year);
printf("Remaining days: %d\n", 365 - day_of_year);
}
}
