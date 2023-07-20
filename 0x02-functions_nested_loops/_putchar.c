#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: on success 1, the character written
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{

return (write(1, &c, 1));

}
