#include "main.h"
/**
 * read_textfile- reads text file and prints it to POSIX stdout
 * @filename:ptr to name of file
 * @letters:number of letters function should read and print
 * Return:0 if function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *b;
ssize_t o;
ssize_t w;
ssize_t r;

if (filename == NULL)
return (0);

b = malloc(sizeof(char) * letters);
if (b == NULL)
return (0);

o = open(filename, O_RDONLY);
r = read(STDIN_FILENO, b, letters);
w = write(STDOUT_FILENO, b, r);

if (o == -1 || r == -1 || w == -1 || w != r)
{
free(b);
return (0);
}
free(b);
close(o);

return (w);
}
