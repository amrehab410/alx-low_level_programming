#include "main.h"

/**
 *  * print_last_digit - Prints the last digit of a number.
 *   * @n: The number in question.
 *    *
 *     * Return: Value of the last digit.
 */

int print_last_digit(int n)
{
	if (last_digit < 0)
		last_digit *= -1;
	return (n % 10 + '0');
}
