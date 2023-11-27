#include "main.h"
/**
 * create_file- creates a file
 * @filename:ptr to the name of the file being created
 * @text_content:ptr to string to write the file
 * Return:-1 if function fails else 1
 */
int create_file(const char *filename, char *text_content)
{
int o;
int w;
int l = 0;
if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (l = 0; text_content[l];)
l++;
}
o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(o, text_content, l);
if (o == -1 || w == -1)
return (-1);

close(o);
return (1);
}

