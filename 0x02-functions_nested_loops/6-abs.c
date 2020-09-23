#include "holberton.h"
/**
 * _abs - value of int
 * @hyfr: value int
 * Return: absolute value of hyfr
 */
int _abs(int hyfr)
{
	if (hyfr < 0)
	{
		return (hyfr * -1);
	}
	else
		return (hyfr);
}
