#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
<<<<<<< HEAD
 *
=======
>>>>>>> 833025f92fc3f6b752a891c84db0c0af3cdd42ec
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
