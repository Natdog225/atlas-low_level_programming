#include "main.h"
/**
 * _isupper -  check desc
 *
 * Description: Checks if letters are uppercase
 *
 * @c: int used
 *
 * Return: 1 if upper, 0 if not
 */
int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}
