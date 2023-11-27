#include "main.h"
/**
 * append_text_to_file- appends text at the end of file
 * @filename:ptr to name of file
 * @text_content:str to add to end of file
 * Return:-1 if function fails else 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int l = 0;
int o;
int w;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (; text_content[l];)
l++;
}
o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, l);

if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}


