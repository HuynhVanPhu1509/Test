#include"stringlen.h"
int len(char* str)
{
	int len = 0;
	while (str[len] != 0)
	{
		len++;
	}
	return len;
}