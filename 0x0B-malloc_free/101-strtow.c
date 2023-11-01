#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locates index marking the end of first word within string.
 * @str: string parameter to be searched.
 * Return:index marking end of initial word pointed to by str.
 */
int word_len(char *str)
{
int len = 0;
int i = 0;
while (*(str + i) && *(str + i) != ' ')
{
len++;
i++;
}
return (len);
}

/**
 * count_words - Counts number of word within string
 * @str: string parameter searched
 * Return: The number of words contained within str
 */
int count_words(char *str)
{
int i = 0;
int len = 0;
int words = 0;
for (i = 0; *(str + i); i++)
len++;
for (i = 0; i < len; i++)
{
if (*(str + i) != ' ')
{
words++;
i += word_len(str + i);
}
}
return (words);
}

/**
 * strtow - Splits string into words.
 * @str: string parameter to be split.
 * Return: If str = NULL else pointer to array of strings.
 */
char **strtow(char *str)
{
char **strings;
int i = 0;
int words;
int w;
int letters;
int l;
if (str == NULL || str[0] == '\0')
return (NULL);
words = count_words(str);
if (words == 0)
return (NULL);
strings = malloc(sizeof(char *) * (words + 1));
if (strings == NULL)
return (NULL);
for (w = 0; w < words; w++)
{
while (str[i] == ' ')
i++;
letters = word_len(str + i);
strings[w] = malloc(sizeof(char) * (letters + 1));
if (strings[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w]);
free(strings);
return (NULL);
}
for (l = 0; l < letters; l++)
strings[w][l] = str[i++];
strings[w][l] = '\0';
}
strings[w] = NULL;
return (strings);
}
