#include <stdio.h>
/**
 * main- generates passwords
 * Return:0
 */
int main(void)
{
char passwd[84];
int index = 0;
int sum = 0;
int half1;
int half2;

srand(time(0));
while (sum < 2772)
{
passwd[index] = 33 + rand() % 94;
sum += passwd[index++];
}
passwd[index] = '\0';
if (sum != 2772)
{
half1 = (sum - 2772) / 2;
half2 = (sum - 2772) / 2;
if ((sum - 2772) % 2 != 0)
half1++;

for (index = 0; passwd[index]; index++)
{
if (passwd[index] >= (33 + half1))
{
passwd[index] -= half1;
break;
}
}
for (index = 0; passwd[index]; index++)
{
if (passwd[index] >= (33 + half2))
{
passwd[index] -= half2;
break;
}
}
}
printf("%s", passwd);
return (0);
}
