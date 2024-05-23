#include "main.h"
/**
 * Description - Tells if a letter is uppercase
 *
 * _isupper -  check desc
 *
 * @c: int used
 *
 * Return: 1 if upper, 0 if not
 */
int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}
