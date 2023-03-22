#include "main.h"

/**
 * _islower - checks if the char is lowercase
 *
 * @c: checks input of function
 *
 * Description: describe input
 *
 * Return:1 if 'c' is lower case , 0 (always success)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);

}
