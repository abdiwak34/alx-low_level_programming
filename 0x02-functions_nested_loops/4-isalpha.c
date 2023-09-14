#include "main.h"
/**
 * chech if it's alpha
 * if it is return one otherwise zero
 */
int _isalpha(int c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
